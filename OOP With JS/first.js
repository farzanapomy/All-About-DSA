//make a constructor or blueprint
const HouseRent = function (amount) {
  this.amount = amount;
};

//make a prototype
HouseRent.prototype.houseRentIncrement = function (amount) {
  this.amount = this.amount + 1000;
  console.log('next month rent will be ' + this.amount + ' taka');
};
HouseRent.prototype.houseRentDecrement = function (amount) {
  this.amount = this.amount - 1000;
};
const myHouse = new HouseRent(1000);
console.log(myHouse);
myHouse.houseRentIncrement();
