var Observable = require('FuseJS/Observable');

var title = Observable();
var content = Observable();
var expense = Observable();


exports.items = Observable()
exports.isLoading = Observable(false);

svp.check()

function addComma(num) {
	var regexp = /\B(?=(\d{3})+(?!\d))/g;
	return num.toString().replace(regexp, ',');
}

function loadSome(){
	
	fetch('http://d4b1ca7d.ngrok.io/account/call/expense',{
		method: "GET",
		headers: {
			"Content-type": "application/JSON"
		}	               
	}).then((res)=>{ return res.json()
	}).then((res)=>{
		
		for(var i = 0 ; i < res.length ; i++){
			exports.items.add({
				title : res[i].title,
				content : res[i].based,
				expense : addComma(res[i].Expense_amount),
				detail : res[i].Details_of_usage,
			})
			
		}

		exports.isLoading.value = false


	}).catch((err)=>{
		console.log("Error: " + error);
	});
}
// function loadSome() {


// 	for (var i=0; i < 5; ++i ) {

// 		exports.items.add( {
// 			title : "공모전 참가비",
// 			content : "IFdesignaward_디자인",
// 			expense : addComma(460000),
// 			detail : "4월 30일 화요일\n2020 IFaward 참가\n참가비용 46만원\n참가비 46만원 출금 ",
// 		})

// 	}
	
// 	exports.isLoading.value = false

// }


var maxSimulatedDelay = 1.5
var minSimulatedDelay = 0.25
exports.loadMore = function() {
	//it's possible this gets called again before the previous loading is complete
	if (exports.isLoading.value) {
		return
	}
	
	exports.isLoading.value = true



	var delay = Math.random() * (maxSimulatedDelay - minSimulatedDelay) + minSimulatedDelay
	setTimeout( loadSome, delay * 1000 )
	
}




