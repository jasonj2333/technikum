const newTask = document.querySelector("#newTask");
const addTaskButton = document.querySelector("button");
const tasks = document.querySelector("#tasks");

addTaskButton.addEventListener("click", addNewTask)

function addNewTask(e){
    e.preventDefault();
    let taskName = newTask.value;
    if(taskName === "") return;
    //tasks.innerHTML += `<p>${taskName}</p>`;
    const task = createTask(taskName);
    tasks.appendChild(task);
    newTask.value = "";
}

function createTask(taskName){
    const task = document.createElement("p");
    task.innerHTML = `${taskName} <button>X</button>`;
    // task.textContent = taskName;
    // const button = document.createElement("button");
    // button.textContent = "X";
    // task.appendChild(button);
    // button.addEventListener("click", deleteTask);
    const deleteButton = task.querySelector("button");
    deleteButton.addEventListener("click", deleteTask);
    
    return task;
}

function deleteTask(e){
    //console.dir(e.target);
    e.target.parentElement.remove();
}