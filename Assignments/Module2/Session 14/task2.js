let items = ["Burger", "Pizza", "Fries"];
let prices = [120, 250, 90];
let total = 0;

for (let i = 0; i < items.length; i++) {
    total += prices[i];
}

console.log("Total price is: " + total);