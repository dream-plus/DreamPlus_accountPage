var Observable = require("FuseJS/Observable");

var maxSimulatedDelay = 1.5
var minSimulatedDelay = 0.25


var _id = Observable("");
var category = Observable("");
var name = Observable("");
var title = Observable("");
var array = Observable("");
var result = Observable("");
var content = Observable("");
var days = Observable("");

exports.items = Observable();

exports.isLoading = Observable(false);

svp.check();
exports.loadMore = function(){
	//it's possible this gets called again before the previous loading is complete

	if (exports.isLoading.value) {
		return
	}
	exports.isLoading.value = true;

	var delay = Math.random() * (maxSimulatedDelay - minSimulatedDelay) + minSimulatedDelay
	setTimeout( loadSome, delay * 1000 );
	
}


function loadSome(){
	fetch('http://d4b1ca7d.ngrok.io/board/am',{
		method: "GET",
		headers: {
			"Content-type": "application/JSON"
		}


	}).then(function(result){
		// result = result;
		// exports.result = result;
		return result.json();
	}).then(function(result){
		for(var i in result){
			exports.items.add( {
				name: result[i].name,
				title : result[i].title,
				content : result[i].content,
				days : result[i].date
			})
			// console.log(name.value);				
		}

		exports.isLoading.value = false;

	}).catch((err)=>{
		console.log(err);
	});

	

}

exports.clicked= function(){router.goto("SubPage")}

// module.exports = {
// 	result:result,

// 	page1: function() { router.goto("page1"); },
// 	page2: function() { router.goto("page2"); },
// 	page3: function() { router.goto("page3"); }
// }