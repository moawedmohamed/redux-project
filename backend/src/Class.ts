class Person{
    username:string='moawed'
    constructor(username:string) {
        this.username = username;
        
    }
}
const mo = new Person('moawed');
console.log(mo.username);

const fullname =  ()=> {
    return `hi ${this.first} ${this.last}`
}

const moh = {
    first: "moawed",
    last:"mohamed"
}
const t=(fullname.bind(moh));
console.log(t());
