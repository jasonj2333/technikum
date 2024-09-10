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
user1.login();
user1.showUser();
user1.login();
user1.toggleActive();
user1.showUser();
user1.showLoginDates();
user1.toggleActive();
user1.showUser();
