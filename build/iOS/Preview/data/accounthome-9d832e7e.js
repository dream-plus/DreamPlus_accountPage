var Observable = require('FuseJS/Observable');


var direction = Observable();
var title = Observable();
var content = Observable();
var expense = Observable();

var right = Observable(0);
var left = Observable(0);
var opp = Observable();

var count = 0;
var pin = 0;

exports.items = Observable()
exports.isLoading = Observable(false);

function addComma(num) {
	var regexp = /\B(?=(\d{3})+(?!\d))/g;
	return num.toString().replace(regexp, ',');
}

svp.check()

function loadSome() {


	for (var i=0; i < 5; ++i ) {
		if(count == 0){
			exports.items.add( {
				direction : "Left",
				opp : "Right",
				title : "공모전 수상",
				content : "ROS",
				expense : addComma(300000),
				right : 0,
				left : 10,
			})
			count = 1;
		}
		else if(count == 1){
			exports.items.add( {
				direction : "Right",
				opp : "Left",
				title : "회식",
				content : "소주15, 맥주30, 안주 9",
				expense : addComma(210000),
				right : 10,
				left : 0,
			})
			count = 0;
		}
	}

	
	exports.isLoading.value = false

}


var maxSimulatedDelay = 1.5
var minSimulatedDelay = 0.25
exports.loadMore = function() {

	if (exports.isLoading.value) {
		return
	}

	exports.isLoading.value = true


	var delay = Math.random() * (maxSimulatedDelay - minSimulatedDelay) + minSimulatedDelay
	setTimeout( loadSome, delay * 1000 )
	
}



