export class User{
    constructor(nick, name, surname, email, role, pass){
        this.nick = nick;
        this.name = name;
        this.surname = surname;
        this.email = email;
        this.role = role;
        this.pass = pass;
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
        return `<tr>
                    <td>${this.nick}</td>
                    <td>${this.name}</td>
                    <td>${this.surname}</td>
                    <td>${this.email}</td>
                    <td>${this.role}</td>
                    <td>${this.loginDates[this.loginDates.length - 1]}</td>
                    <td>${this.active ? "Aktywny" : "Nieaktywny"}</td>
                </tr>`;
    }
    toggleActive(){
        this.active = !this.active;
    }

}




