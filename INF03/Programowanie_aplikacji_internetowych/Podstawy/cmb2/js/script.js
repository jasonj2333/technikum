function changeImg(source_id) {
    const sourceH1 = document.querySelector('#'+source_id+' figcaption');
    const sourceImage = document.querySelector('#'+source_id+' img');

    const h1 = document.querySelector('#image h1');
    const image = document.querySelector('#image img');

    h1.innerHTML = sourceH1.innerHTML;
    image.src = sourceImage.src;
}

const computers = document.querySelectorAll('#computers figure');
computers.forEach(function (computer) {
    computer.addEventListener("click", function () {
        changeImg(computer.id);
    })
})

const backgroundColor = document.querySelector('#backgroundColor');
backgroundColor.addEventListener("change", function () {
    const color = backgroundColor.value;
    document.body.style.backgroundColor = color;
})

const fontSize = document.querySelector('#fontSize');
fontSize.addEventListener("change", function () {
    const size = fontSize.value;
    document.body.style.fontSize = size;
})

const fontColor = document.querySelector('#lista');
fontColor.addEventListener("change", function () {
    const color = fontColor.value;
    document.body.style.color = color;
})

const imgSize = document.querySelectorAll('input[name="obrazek"]');
const image = document.querySelector('#image img');
const baseWith = image.width;
//console.dir(image.width);


imgSize.forEach(li => {  
    li.addEventListener("change", ()=>{
        image.width = baseWith * li.value;
        console.log(baseWith * li.value + 'px;');
        // console.log(li.value);
        // image.style.width = li.value;
    })
})