#include<stdio.h>
int main()
{
	double mathrandom=Math.random();


	try{
		if(mathrandom>0.5){
			System.out.println("�ݶ�û���쳣");
		}else{
			throw new Exception("�ֶ��׳��쳣");
		}

	}catch(Exception e1){
		System.out.println("��㲶�����"+e1);
		try{
			mathrandom=52/0;
		}catch(ArithmeticException e2){
			System.out.println("catch�в���Ķ���"+e2);
		}finally{
			System.out.println("�ڲ�finally");
		}

	}finally{
		System.out.println("���finally");
	}
