#include <iostream>
#include<vector>
#include<cmath>
#include<fstream>
#include<stack>
using namespace std;
//typedef vector< vector<float> > matrix;

float m[4][4],p[4][4],arr[100][4][4],v[4][4],vp[3][3],r[4][1],po[4][1];
float a[300][4];
int top=-1,ct=0;
int OGL_TRIANGLES;
void print(float mm[][4])
{

	for(int i=0;i<=3;i++) 
	{
		for(int j=0;j<=3;j++)
			cout << mm[i][j] << " ";
		cout << endl;
	}

}
void mul(float mm[][4],float tr[][4])
{
	float temp,c[4][4];
	for(int i=0;i<=3;i++)
		for (int j=0;j<=3;j++)
		{
			temp=0;
			for(int k=0;k<=3;k++)
			{
				temp+=mm[i][k]*tr[k][j];
			}
			c[i][j]=temp;
		}
	for (int i=0;i<=3;i++)
		for (int j=0;j<=3;j++)
		{
			m[i][j]=c[i][j];

		}
	print(m);
}
void mult(float mm[][4],float tr[][4])
{
	float temp,c[4][4];
	for(int i=0;i<=3;i++)
		for (int j=0;j<=3;j++)
		{
			temp=0;
			for(int k=0;k<=3;k++)
			{
				temp+=mm[i][k]*tr[k][j];
			}
			c[i][j]=temp;
		}
	for (int i=0;i<=3;i++)
		for (int j=0;j<=3;j++)
		{
			v[i][j]=c[i][j];

		}
	print(m);
}
void multi(float mm[][4],float tr[][1])
{
	float temp,c[4][4];
	for(int i=0;i<=3;i++)
		for (int j=0;j<1;j++)
		{
			temp=0;
			for(int k=0;k<=3;k++)
			{
				temp+=mm[i][k]*tr[k][j];
			}
			c[i][j]=temp;
		}
	for (int i=0;i<=3;i++)

		r[i][0]=c[i][0];




}
void oglMPushMatrix()
{
	top++;
	for(int i=0;i<4;i++)
		for(int j=0;j<4;j++)
			arr[top][i][j]=m[i][j];

	return; 
}
void oglMPopMatrix()
{
	if ( top>-1 )
	{
		for(int i=0;i<4;i++)
			for(int j=0;j<4;j++)
				m[i][j]= arr[top][i][j];

		top--; 

	}
	return ;
}
void oglMRotate(float angle, int ax)
{
	float tr[4][4];
	angle=angle *3.14/180;
	for(int i=0;i<4; i++)
	{
		for (int j=0;j<4;j++)
		{
			if(i==j)
				tr[i][j]=1;
			else 
				tr[i][j]=0;
		}
	}
	if(ax==1)
	{
		tr[1][1]=cos(angle);
		tr[1][2]=-sin(angle);
		tr[2][1]=sin(angle);
		tr[2][2]=cos(angle);
	}
	if(ax==2)
	{
		tr[0][0]=cos(angle);
		tr[2][0]=-sin(angle);
		tr[0][2]=sin(angle);
		tr[2][2]=cos(angle);
	}

	if(ax==3)
	{
		tr[0][0]=cos(angle);
		tr[0][1]=-sin(angle);
		tr[1][0]=sin(angle);
		tr[1][1]=cos(angle);
	}
	mul(m,tr);
}
void oglMTranslate(float tx, float ty, float tz)
{
	float tr[4][4];
	for(int i=0;i<4; i++)
	{
		for (int j=0;j<4;j++)
		{
			if(i==j)
				tr[i][j]=1;
			else    
				tr[i][j]=0;

		}               

	}       
	tr[0][3]=tx;
	tr[1][3]=ty;
	tr[2][3]=tz;
	print(tr);
	mul(m,tr);
}


void oglMScale(float factor,int ax)
{

	float tr[4][4];
	for(int i=0;i<4; i++)
	{
		for (int j=0;j<4;j++)
		{
			if(i==j)
				tr[i][j]=1;
			else 
				tr[i][j]=0;
		}
	}
	if(ax==1)
		tr[0][0]=factor;
	if(ax==2)
		tr[1][1]=factor;
	if(ax==3)
		tr[2][2]=factor;
	mul(m,tr);
}
void oglMLoadIdentity()
{
	for(int i=0;i<4; i++)
	{
		for (int j=0;j<4;j++)
		{
			if(i==j)
				m[i][j]=1;
			else 
				m[i][j]=0;
		}
	}
}
void oglMMatrix(float mat[16])
{
	float tr[4][4];
	for(int i=0;i<4;i++)
		for (int j=0;j<4;j++)
		{	       tr[i][j] = mat[4*j+i];}


	mul(m,tr);

}

void oglVLoadIdentity()
{
	for(int i=0;i<4; i++)
	{
		for (int j=0;j<4;j++)
		{
			if(i==j)
				v[i][j]=1;
			else 
				v[i][j]=0;
		}
	}
}
void oglVMatrix(float mat[16])
{
	float tr[4][4];
	for(int i=0;i<4;i++)
		for (int j=0;j<4;j++)
		{	       tr[i][j] = mat[4*j+i];}


	mult(v,tr);

}
void oglVRotate(float angle, int ax)
{

	float tr[4][4];
	angle=-angle *3.14/180;
	for(int i=0;i<4; i++)
	{
		for (int j=0;j<4;j++)
		{
			if(i==j)
				tr[i][j]=1;
			else 
				tr[i][j]=0;
		}
	}
	if(ax==1)
	{
		tr[1][1]=cos(angle);
		tr[1][2]=-sin(angle);
		tr[2][1]=sin(angle);
		tr[2][2]=cos(angle);
	}
	if(ax==2)
	{
		tr[0][0]=cos(angle);
		tr[2][0]=-sin(angle);
		tr[0][2]=sin(angle);
		tr[2][2]=cos(angle);
	}

	if(ax==3)
	{
		tr[0][0]=cos(angle);
		tr[0][1]=-sin(angle);
		tr[1][0]=sin(angle);
		tr[1][1]=cos(angle);
	}
	mult(v,tr);
}
void oglVTranslate(float tx, float ty, float tz)
{
	float tr[4][4];
	for(int i=0;i<4; i++)
	{
		for (int j=0;j<4;j++)
		{
			if(i==j)
				tr[i][j]=1;
			else    
				tr[i][j]=0;

		}               

	}       
	tr[0][3]=-tx;
	tr[1][3]=-ty;
	tr[2][3]=-tz;
	print(tr);
	mult(v,tr);
}

void oglLookAt(float cx,float cy,float cz,float roll,float pitch,float yaw)
{
	oglVRotate(roll,2);
	oglVRotate(pitch,1);
	oglVRotate(yaw,3);
	oglVTranslate(cx,cy,cz);
}
void oglOCamera(float left,float right,float bottom,float top,float near,float far)
{

	p = { {2/(right-left),0,0,-(right+left)/(right-left)},
		{0,2/(top-bottom),0,-(top+bottom)/(top-bottom)},
		{0,0,2/(far-near),(far+near)/(far-near)},
		{0,0,0,1}
	};

}
void oglPLoadIdentity()
{
	for(int i=0;i<4; i++)
	{   
		for (int j=0;j<4;j++)
		{   
			if(i==j)
				p[i][j]=1;
			else 
				p[i][j]=0;
		}   
	}   
}
void oglPCamera(float FoV_h, float aspect, float near,float far)
{
	float h = 1.0f/tan(-FoV_h*M_PI/360.0f);
        p={ {h/aspect,0,0,0},{0,h,0,0},{0,0,(far+near)/(near-far),2.0f*far*near/(near-far)},{0,0,-1,0}};
	/*p[0][0] = h / aspect;
	p[0][1] = 0;
	p[0][2] = 0;
	p[0][3] = 0;

	p[1][0] = 0;
	p[1][1] = h;
	p[1][2] = 0;
	p[1][3] = 0;

	p[2][0] = 0;
	p[2][1] = 0;
	p[2][2] = (far + near)/neg_depth;
	p[2][3] = -1;

	p[3][0] = 0;
	p[3][1] = 0;
	p[3][2] = 2.0f*(near*far)/neg_depth;
	p[3][3] = 0;*/


}
void oglViewport(float llx, float lly, float width, float height)
{
	vp={{(width-llx)/2,0,(width+llx)/2},{0,(height-lly)/2,(height+lly)/2},{0,0,1}};
}

void oglBegin(int x)
{
		a[ct][0]=1;
		ct++;
}

void oglEnd()
{
	a[ct][0]=2;
	ct++;
}
void oglColour(float r, float g, float b)
{
	a[ct][0]=3;
	a[ct][1]=r;
	a[ct][2]=g;
	a[ct][3]=b;
	ct++;
}
void oglClear(float r,float  g,float  b)
{
	a[ct][0]=4;
	a[ct][1]=r;
	a[ct][2]=g;
	a[ct][3]=b;
	ct++;
}
void oglVertex(float x,float  y, float z)
{
	a[ct][0]=5;
	po={{x},{y},{z},{1}};
	multi(m,po);
	multi(v,r);
	multi(p,r);
	float res[3][1],t[3][1],temp;

	res[0][0]=r[0][0];
	res[1][0]=r[1][0];
	res[2][0]=r[3][0];

	for(int i=0;i<3;i++)
		for (int j=0;j<1;j++)
		{
			temp=0;
			for(int k=0;k<3;k++)
			{
				temp+=vp[i][k]*res[k][j];
			}
			t[i][j]=temp;
		}





	a[ct][1]=t[0][0]/t[2][0];
	a[ct][2]=t[1][0]/t[2][0];

	ct++;
}
void oglShow()
{
	for(int i=0;i<ct;i++)
	{
		int x = a[i][0];
		switch(x){

			case 1:
				glBegin(GL_TRIANGLES);
				break;
			case 2:
				glEnd();
				break;
			case 3:
				glColor3f(a[i][1],a[i][2],a[i][3]);
				break;
			case 4:
				glClearColor(a[i][1],a[i][2],a[i][3],0);
				glClear(GL_COLOR_BUFFER_BIT);
				break;
			case 5:
				glVertex2f(a[i][1],a[i][2]);
				break;
		}
	}
	ct=0;
}




/*int  main()
  {

  m={{1,0,0,0},{0,1,0,0},{0,0,1,0},{0,0,0,1}};
  print(m);
  oglMTranslate(1,1,1);
  oglMRotate(60,3);
  }*/

