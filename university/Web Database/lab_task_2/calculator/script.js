function add(event) {
  event.preventDefault();

  let a = parseFloat(document.getElementById("input-a").value);
  let b = parseFloat(document.getElementById("input-b").value);

  let c = a + b;
  document.getElementById("result").innerHTML = c;
}
function sub(event) {
  event.preventDefault();
  let a = parseFloat(document.getElementById("input-a").value);
  let b = parseFloat(document.getElementById("input-b").value);

  let c = a - b;
  document.getElementById("result").innerHTML = c;
}
function mul(event) {
  event.preventDefault();
  let a = parseFloat(document.getElementById("input-a").value);
  let b = parseFloat(document.getElementById("input-b").value);

  let c = a * b;
  document.getElementById("result").innerHTML = c;
}
function div(event) {
  event.preventDefault();
  let a = parseFloat(document.getElementById("input-a").value);
  let b = parseFloat(document.getElementById("input-b").value);

  let c = a / b;
  document.getElementById("result").innerHTML = c;
}
