//console.log(`Hello`); // basic console.log output

//window.alert(`Hello`); // alert box

//document.getElementById("mainHeading").textContent = `New Heading`; // change the text content of the mainHeading element
//document.getElementById("introParagraph").textContent = `I like pizza`; // change the color of the mainHeading element

let x; // declare a variable x
x = 5; // assign x the value of 5

console.log(x); // output the value of x to the console

let y = 10; // declare a variable y and assign it the value of 10
console.log(y); // output the value of y to the console

let age = 21; 
let name = `John`;
let price = 20.99;
let gpa = 3.5;

console.log(`Name: ${name}, Age: ${age}, Price: ${price}, GPA: ${gpa}`); // output multiple variables to the console
console.log(typeof gpa); // output the data type of the gpa variable
console.log(typeof name); // output the data type of the name variable

let online = true;
console.log(typeof online); // output the data type of the online variable
console.log(`${name} is online: ${online}`); // output the name and online status to the console

document.getElementById("fullname").textContent = name; // output the name to the fullName element
document.getElementById("age").textContent = age; // output the age to the age element
document.getElementById("online").textContent = online; // output the price to the price element