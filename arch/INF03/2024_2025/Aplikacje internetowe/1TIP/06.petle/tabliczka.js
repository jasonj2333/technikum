document.write("<table>");
for(let x = 0; x <= 10; x++){
    document.write("<tr>");
    for(let y = 0; y<=10; y++){
        if(x==0) {
            document.write(`<th>${y}</th>`);
        }else if(y==0){
            
        }
        else{
            document.write(`<td>${x*y}</td>`);
        }
        
    }
    document.write("</tr>");
}
document.write("</table>");