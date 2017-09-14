function processData(input) {
    var line = input.split('\n');
    var N = line[0].split(' ').map(function(el){
        return parseInt(el, 10);
    })[0];
    var Q = line[0].split(' ').map(function(el){
        return parseInt(el, 10);
    })[1];
    var query = [];
    for(var i=1;i<line.length;i++) {
        query.push(line[i].split(' ').map(function(el) {
            return parseInt(el, 10);
        }));
    }
    var lastAnswer = 0;
    var S = [];



    for(var i=0;i<query.length;i++) {
        if(query[i][0]==1) {

            var temp = insertIndex(query[i][1],lastAnswer,N);
            if(S[temp]==undefined) {
                S[temp] = [];
            }
            S[temp].push(query[i][2]);

        } else if(query[i][0]==2) {

            var temp = insertIndex(query[i][1],lastAnswer,N);
            lastAnswer = S[temp][query[i][2] % S[temp].length];
            console.log(lastAnswer);
        }
    }


} 

function insertIndex(x,lastAnswer,N) {
    return ((x^lastAnswer) % N);
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

