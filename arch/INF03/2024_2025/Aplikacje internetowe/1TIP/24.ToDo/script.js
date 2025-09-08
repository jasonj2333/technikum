const addTask = document.querySelector("#addTask");
const newTask = document.querySelector("#newTask");
const tasks = document.querySelector("#tasks");

addTask.addEventListener("click", addNewTask);

function addNewTask(e) {
    e.preventDefault();
    let taskName = newTask.value;
    if(taskName === '') return;
    const task = createTask(taskName);
    tasks.appendChild(task);
    newTask.value = '';
}

function createTask(taskName){
    const task = document.createElement('p'); //<p></p>
    task.innerHTML = `${taskName} <button>X</button>`;  //<p>Nazwa <button>X</button></p>

    const deleteButton = task.querySelector("button");
    deleteButton.addEventListener("click", deleteTask);
    return task; 
}

function deleteTask(e) {
    e.target.parentElement.remove();
}