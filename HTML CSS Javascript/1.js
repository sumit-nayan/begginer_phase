function addnumbers(a,b){
    return a+b;
}
let sum=addnumbers(10,5);
console.log(sum,"\n");

let num=8;
if(num % 2 === 0){
    console.log(num + " is even.");
}else{
    console.log(num + " is odd.");
}
console.log("\n");




let age = 25;
let msg = (age>=18)? "You are an adult": "You are minor";
console.log(msg);


let person = {
    name : "Sumit Nayan",
    course : "BSBE",
    address : "Guwahati",
    cpi : "7.07"
};
console.log(person);

delete person.cpi;

console.log(person);

