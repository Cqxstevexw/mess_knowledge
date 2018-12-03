#include<stdio.h>
int main()
{
	double mathrandom=Math.random();


	try{
		if(mathrandom>0.5){
			System.out.println("暂定没有异常");
		}else{
			throw new Exception("手动抛出异常");
		}

	}catch(Exception e1){
		System.out.println("外层捕获对象，"+e1);
		try{
			mathrandom=52/0;
		}catch(ArithmeticException e2){
			System.out.println("catch中捕获的对象"+e2);
		}finally{
			System.out.println("内层finally");
		}

	}finally{
		System.out.println("外层finally");
	}
