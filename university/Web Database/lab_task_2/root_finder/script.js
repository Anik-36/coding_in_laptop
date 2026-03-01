function root() {
  let a = parseFloat(document.getElementById("input-a").value);
  let b = parseFloat(document.getElementById("input-b").value);
  let c = parseFloat(document.getElementById("input-c").value);
  let resultDiv = document.getElementById("result");
  if (isNaN(a) || isNaN(b) || isNaN(c)) {
    alert("plz enter your number");
  }
  //   console.log(a);
  let D = b * b - 4 * a * c;
  if (D > 0) {
    let x1 = (-b + Math.sqrt(D)) / (2 * a);
    let x2 = (-b - Math.sqrt(D)) / (2 * a);
    resultDiv.innerHTML = "x1 = " + x1 + "<br>" + "x2 = " + x2;
  } else if (D === 0) {
    x = -b / (2 * a);
    resultDiv.innerHTML = "x = " + x;
  } else {
    resultDiv.innerHTML = "Imaginary Number";
  }
}
