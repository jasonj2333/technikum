export function stringToHash(string) {
 
    let hash = 0;
 
    if (string.length == 0) return hash;
 
    for (let i = 0; i < string.length; i++) {
        let char = string.charCodeAt(i);
        hash = ((hash << 5) - hash) + char;
        hash = hash & hash;
    }
 
    return hash;
}


export function findUserByNick(list, nick, pass) {
    return list.find((obj) => obj.nick === nick && obj.pass === pass);
}