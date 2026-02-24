function handleSubmit() {
  const skills = [...document.querySelectorAll(".input-checkbox:checked")].map(
    (cb) => cb.value,
  );
  const gender = document.querySelector(".input-radio:checked");

  const formData = {
    studentName: document.getElementById("studentName").value,
    studentID: document.getElementById("studentID").value,
    email: document.getElementById("email").value,
    phone: document.getElementById("phone").value,
    department: document.getElementById("department").value,
    gender: gender ? gender.value : "",
    skills: skills,
    address: document.getElementById("address").value,
    password: document.getElementById("password").value,
    dateOfBirth: document.getElementById("dob").value,
  };

  console.log("Student Registration Data:", formData);
}

function handleReset() {
  // Reset all input and textarea fields
  document
    .querySelectorAll(".input-field, .textarea-field, .select-field")
    .forEach((el) => (el.value = ""));

  // Reset all radio and checkbox inputs
  document
    .querySelectorAll(".input-radio, .input-checkbox")
    .forEach((el) => (el.checked = false));
}
