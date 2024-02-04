// window.alert("hi");
// console.log("hello");

let heading = document.getElementById("heading"); //h1
//console.log(heading);

let headings = document.getElementsByClassName("heading"); //h1
//console.log(headings);


let paragraphs=document.getElementsByTagName("p");
console.dir(paragraphs);


//query selectors
//only one element
let firstEl = document.querySelector("p");
console.dir(firstEl);


//if all elements
let allElements = document.querySelectorAll("p");
console.dir(allElements);



//first child
console.dir(document.body.firstChild);