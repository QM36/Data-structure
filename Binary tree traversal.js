var tree = {
	left : {
		left : {
			left: 7,
			right : 8,
			value: "c"
		},
		right : {
			left: 1,
			right :2,
			value :"d"
		},
		value :"b"
	},
	right : {
		left: {
			left: 3,
			right: 4,
			value :"e"
		},
		right: {
			left : 5,
			right:6,
			value :"f"
		},
		value :"g"
	},
	value: "a"
}
function forward (tree) {
	console.log(tree.value);
	if(typeof tree.left == "number") return;
	forward(tree.left);
	forward(tree.right);
}
function middle (tree) {
	if(typeof tree.left == "number") {
		console.log(tree.value);
		return;
	}
	middle(tree.left);
	console.log(tree.value);
	middle(tree.right);
}
function downward (tree) {
	if(typeof tree.left == "number") {
		console.log(tree.value);
		return;
	}
	downward(tree.left);
	downward(tree.right);
	console.log(tree.value);
}
console.log("先序遍历：");
forward(tree);
console.log("中序遍历：");
middle(tree);
console.log("后序遍历：");
downward(tree);