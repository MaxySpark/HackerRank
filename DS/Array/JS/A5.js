function countOccurance(list,str) {
    var count = 0;
    for(var i=0;i<list.length;i++) {
        if(list[i]==str) {
            count++;
        }
    }
    return count;
}

function processData(input) {
    //Enter your code here
    var line = input.split('\n');
    var N = parseInt(line[0])
    var Q = parseInt(line[N+1]);
    var list = [];
    var query = [];
    for(var i=1;i<=N;i++) {
        list.push(line[i]);
    }
    for(var i=N+2;i<line.length;i++) {
        query.push(line[i]);
    }
    for(var i =0;i<Q;i++) {
       console.log(countOccurance(list,query[i]));
    }
} 

process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("data", function (input) {
    _input += input;
});

process.stdin.on("end", function () {
   processData(_input);
});
