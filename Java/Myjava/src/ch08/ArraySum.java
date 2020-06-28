package ch08;

import java.math.MathContext;
import java.util.Random;

public class ArraySum {
	
	public static void main(String[] args) {
		

		int x[][] = new int[3][3];
		int y[][] = new int[3][3];
		int[][] z = new int[3][3];
		
		for(int i=0 ; i<3 ; i++) {
			for( int j=0 ; j<3 ;j++) {
				x[i][j] = (int)(Math.random()*30);
				y[i][j] = (int)(Math.random()*30);
			}
		}
		
		
		for(int i=0 ; i<3 ; i++) {
			for(int j=0 ; j<3 ;j++) {
				z[i][j]=x[i][j]+y[i][j];
				
				System.out.print(x[i][j]+"+"+y[i][j]+"="+z[i][j]+" ");
			}
			System.out.println();
		}
		
	}
}
