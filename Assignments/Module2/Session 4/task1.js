function calculateTotal(itemPrice, quantity) {
    return itemPrice * quantity;
}

// Example
let itemPrice = 250;
let quantity = 4;

let total = calculateTotal(itemPrice, quantity);

console.log("Item Price:", itemPrice);
console.log("Quantity:", quantity);
console.log("Total Bill Amount:", total);