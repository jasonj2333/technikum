class User{
    constructor(nick, name, surname, email, role){
        this.nick = nick;
        this.name = name;
        this.surname = surname;
        this.email = email;
        this.role = role;
        this.loginDates = [];
        this.active = true;
    }
    login(){
        let date = new Date();
        this.loginDates.push(date.toLocaleString())
    }
    showLoginDates() {
        this.loginDates.forEach((value, index) => {
            console.log(index, value);
        });
    }
    showUser(){
        console.log(`Uzytkownik ${this.name} ${this.surname} -  ${this.nick} - ${this.email} - ${this.active}`);
    }
    toggleActive(){
        this.active = !this.active;
    }

}

const user1 = new User("jasonj", "Jerzy", "Jasonek", "jasonj@wp.pl", "admin");
const user2 = new User("tomek", "Tomek", "Atomek", "tomek@wp.pl", "user");
const user3 = new User("tytus", "Tytus", "de Zoo", "tytus@wp.pl", "user");

