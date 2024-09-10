document.write("<h1>Sala kinowa</h1>");
document.write("<table>");

let rzedy = 10;
let miejsca = 13;

let zajete = ["612", "107", "13"]

for(let i=1; i<=rzedy; i++){
    document.write("<tr>");
    document.write(`<td><b> ${i} </b></td>`);
    
    for(let j=1; j<=miejsca; j++){
        let mz = i.toString() + j.toString();
        //       5 -> "5"     +  13 ->"13"
        if(zajete.includes(mz)){
            document.write(`<td> X </td>`);
        }else{
            document.write(`<td> ${j} </td>`);
        }
        
    }
    document.write("</tr>");
}

document.write("</table>");
