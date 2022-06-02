
import java.util.Scanner

fun main(args: Array<String>){
	
val sc= Scanner(System.`in`)
var t:Int=sc.nextInt()

while(t>0){
    --t;
var n:Int=sc.nextInt()
var a =  Array(n, { i -> i * 1 })

for(i in 0..n-1){
	
	var x:Int=sc.nextInt()
	a.set(i,x)
}
var k=0;
for(i in 0..n-2){
	
	if(a[i]!=a[i+1]){
	k=i;
	break;
	}
}
if(k==0 && a[0]!=a[2])
println(1)
else if(k==0)
println(2)
else 
println(k+2)
}

}