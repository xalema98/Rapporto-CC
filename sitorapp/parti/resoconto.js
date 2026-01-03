/*let resoconto = "";
function f3(){
    let div = document.getElementById("stampazione");
    resoconto = resoconto + div.textContent;
    resoconto += '\n';
    localStorage.setItem("resoconto", resoconto);
    console.log("resoconto: " + resoconto);
}
function f4(){
    let stampazione = document.getElementById("stampazione");
    let resoconto = localStorage.getItem("resoconto");
    stampazione.textContent = resoconto;
}*/

let resoconto = "";
function f3() {
    const div = document.getElementById("stampazione");
    const nuovoTesto = div.textContent;
    const attuale = localStorage.getItem("resoconto") ?? "";
    if (nuovoTesto != ""){
    resoconto = attuale + nuovoTesto + "\n";
    localStorage.setItem("resoconto", resoconto);
    console.log("resoconto:", resoconto);
    }
}
function f4() {
    const stampazione = document.getElementById("stampazione");
    stampazione.textContent = localStorage.getItem("resoconto") ?? "";
}