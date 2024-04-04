import { stringToHash, findUserByNick  } from "./tools.js";
import { User } from "./user.js";
const user1 = new User("jasonj", "Jerzy", "Jasonek", "jasonj@wp.pl", "admin", stringToHash("123"));
const user2 = new User("tomek", "Tomek", "Atomek", "jasonj@wp.pl", "user", stringToHash("abc"));
const user3 = new User("tytus", "Tytus", "Chmiel", "jasonj@wp.pl", "user", stringToHash("xyz"));

const users = [user1, user2, user3];


//----------- User Interface
const loginSection = document.querySelector("#login");
const adminSection = document.querySelector("#admin");
const userSection = document.querySelector("#user");
const signInButton = document.querySelector("#signIn");
const logoutButtons = document.querySelectorAll(".logout");
const adminTableBody = document.querySelector("#admin > table > tbody");
const activeUserTable = document.querySelector("#user > table > tbody");

let activeSection = loginSection;
let activeUser;

function hideAllSections() {
    loginSection.classList.add('hide');
    userSection.classList.add('hide');
    adminSection.classList.add('hide');
}

function showSection(sectionName) {
    sectionName.classList.remove('hide');
}

function showUsers() {
    users.forEach(user => {
        let row = user.showUser();
        adminTableBody.innerHTML += row;
    })
}

function showActiveUser(){
    activeUserTable.innerHTML = activeUser.showUser();
}

function loginUser(user) {
    activeUser = user;
    activeUser.login();
    hideAllSections();
    if(activeUser.role === "admin") {
        showSection(adminSection);
        showUsers();
    }
    else {
        showSection(userSection);
        showActiveUser();
    }
    Cookies.set('activeUser', activeUser.nick+"#"+activeUser.pass, { expires: 1, path: '' })
}

function checkActiveUser() {
    let user = Cookies.get('activeUser');
    if(user){
        user = user.split("#");
        user = findUserByNick(users, user[0], parseInt(user[1]));
        if(user) loginUser(user);
    }
    
}

signInButton.addEventListener("click", e=>{
    const nick = document.querySelector("#nick");
    const pass = document.querySelector("#pass");
    const user = findUserByNick(users, nick.value, stringToHash(pass.value));
    if(user == undefined) return alert("Błędny login lub hasło!")

    nick.value = "";
    pass.value = "";
    loginUser(user);
    
});


logoutButtons.forEach(btn => {
    btn.addEventListener("click", ()=>{
        activeUser = undefined;
        hideAllSections();
        showSection(activeSection);
        adminTableBody.innerHTML = "";
        activeUserTable.innerHTML = "";
        Cookies.remove('activeUser', { expires: 1, path: '' })
    })
})

hideAllSections();
showSection(activeSection);
checkActiveUser();