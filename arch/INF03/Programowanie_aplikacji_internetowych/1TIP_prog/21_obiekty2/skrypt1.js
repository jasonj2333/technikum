class Animal{
    constructor(name, age){
        this.name = name;
        this.age = age;
        console.log(`Mam na imię ${this.name}, wiek ${this.age}`)
    }
    eat(){
        console.log(`${this.name} jem!`);
    }
    sleep(){
        console.log(`${this.name} śpię!`);
    }
}

const dog = new Animal("Burek", 3);
const cat = new Animal("Mruczek", 2);

console.log(dog.eat());
console.log(cat.sleep());