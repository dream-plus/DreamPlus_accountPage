var Observable = require("FuseJS/Observable");

var title = Observable("");

var category = ['공지', '자유게시판','QnA'];

for(var i in category){
	category.push(i);
}


var content = Observable("");
var date = new Date();


function goBack()
{
	router.push("boardMain");
	// console.log("goback");
}

function contents(){
	var opts2 = ({
		'_id': 'testid01',
		'name' : 'youasd',
		'title' : title.value,
		'category' : category.value,
		'content' : content.value,
		date : date
	});

	// console.log(JSON.stringify(opts2));
 //    console.log('signin'); //Sign_in 함수가 호출되었는지 확인
 //    console.log(opts2.id, opts2.name)


    fetch('http://d4b1ca7d.ngrok.io/board/am',{
    	method: "POST",
    	headers: {
    		"Content-type": "application/JSON"
    	},
    	body : JSON.stringify(opts2)

    }).then((res)=>{
	            // console.log(JSON.stringify(res));
	            // console.log(JSON.parse(res));
	            return res.json()
	        }).then((res)=>{

	        	console.log(res.success);


	        	if( JSON.parse(res.success) == true){
	            	// router.push("Home", ID);
	            	router.push("boardMain", opts2);
	            	// console.log("Move to mainviewBis");
	            }
	            // JSON.parse(res._bodyInit).documents[1].address_name
	        }).catch((err)=>{
	        	console.log(err);
	        });
	    }

	    var categoryselect = Observable("");

	    var categoryisOpen = Observable(false);

	    function categorytoggleOpen(){
	    	categoryisOpen.value = true;
	    }

	    function categoryclick(e){
	    	categoryselect.value = e.data;
	    	categoryisOpen.value = false;

	    }

	    module.exports = {
	    	board : function(){router.goto("board");},
	    	title: title,
	    	category : category,
	    	content:content,
	    	contents : contents,
	    	goBack : goBack,
	    	categoryisOpen:categoryisOpen,
	    	categoryselect :categoryselect,
	    	categorytoggleOpen:categorytoggleOpen,
	    	categoryclick:categoryclick
	    };
