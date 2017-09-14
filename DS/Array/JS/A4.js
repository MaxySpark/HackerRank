process.stdin.resume();
process.stdin.setEncoding('ascii');

var input_stdin = "";
var input_stdin_array = "";
var input_currentline = 0;

process.stdin.on('data', function (data) {
    input_stdin += data;
});

process.stdin.on('end', function () {
    input_stdin_array = input_stdin.split("\n");
    main();    
});

function readLine() {
    return input_stdin_array[input_currentline++];
}

/////////////// ignore above this line ////////////////////

function leftRotation(a, d) {
    // Complete this function
    var tempV = [];
    for(var i=0;i<d;i++) {
        tempV.push(a[i]);
    }
    for(var i=0;i<a.length-d;i++) {
        a[i]=a[i+d];
    }
    var count = 0;
    
    for(var i=a.length-d;i<a.length;i++) {
        a[i]=tempV[count];
        count++;
    }
    
    return a;
}

function main() {
    var n_temp = readLine().split(' ');
    var n = parseInt(n_temp[0]);
    var d = parseInt(n_temp[1]);
    a = readLine().split(' ');
    a = a.map(Number);
    var result = leftRotation(a, d);
    console.log(result.join(" "));



}
