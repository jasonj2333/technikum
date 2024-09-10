const addTask = document.getElementById("addTask");
const newTask = document.querySelector("#newTask");
const tasks = document.querySelector("#tasks");

// addTask.onclick = function(){
//     alert("Działa z onclick!");
// }

// addTask.onclick = funkcja;

/*
addTask.addEventListener("click", function(){
    alert("Działa z listenera");
})
*/

addTask.addEventListener("click", addNewTask);

function addNewTask(){
	let taskName = newTask.value;
	if(taskName == '') return;
	
	const task = createTask(taskName);
	tasks.appendChild(task);
	newTask.value = "";
};

function createTask(taskName){
	const task = document.createElement("p");
	task.innerHTML = `${taskName} <button>X</button>`;
	const deleteButton = task.querySelector("button");
	deleteButton.addEventListener("click", deleteTask);
	return task;
}

function deleteTask(event){
	event.target.parentElement.remove();
}

/*
function funkcja() {
    alert("Działa!");
}
*/







