// let obj: { id: number, username: string, age: number, isMarried: boolean } = {
//     id: 1,
//     username: "maowed",
//     age: 39,
//     isMarried: false
// }
// console.log(obj);


// let numbers: number[] = [1, 2, 34, 4, 5];
// let mo: [number, string, [number, string], { name: string, age: number }] = [1, 'm', [2, 'moawed'], { name: "moawed", age: 12 }]
// numbers.forEach(element => {
//     console.log(element);

// });

// let obj1: { name: string, age: number } = {
//     name: "mawed",
//     age: 12
// }
// let obj2: { name: string, age: number, id: number } = { ...obj1, id: 1 };

enum direction {
    // ** up right left bottom
    up,
    right,
    bottom,
    left,
}

const plyerDirection = direction.bottom;
console.log(plyerDirection);


//** index signature */**************************** */

// interface cityCap{
//     [value:string]:string
// }

// let ob: cityCap = {
//     cairo:"Egypt"
// }

// *********************************************

const person = {
    username: "mo",
    say() {
        console.log(this);
        // return e.bind(this)().username;  ==> for bind method
        return e.call(this).username
    }
}
console.log(person.say());
function e() {
    return this;
}

console.log(e);


// *****************************************
// implicit and explicit binding

function printUser(msg: string) {
    return  `Hi ${this.name} ${msg}`
}

let moawed = {
    name: "mo",
}
let mohamed = {
    name: "mohamed",
}
console.log(printUser.call(moawed, `welcome back `));
console.log(printUser.bind(mohamed,'moawed')());

