//represents triangles; each triangle has three vertexes (vertex1, vertex2 and vertex3), which are Point objects
public class Triangle {
    ....//fields

    //constructor - receives the coordinates of all three vertexes as arguments
    
    public Triangle (int x, int y, int z){ 
        
        
    }
    .........
    //another constructor - receives as arguments only the coordinates of two vertexes 
    //and sets the third one to be the origin

   //method to compute the perimeter of this triangle 
    //i.e., returns the sum of the lengths of all three sides of the triangle;
    //should use method distanceTo from class Point
    
    //method to return the centroid of the triangle
    
    //method to return a deep copy of this triangle; the deep copy should not share any piece of memory with this triangle
    
    //method toString()
}





//represents triangles; each triangle has three vertexes (vertex1, vertex2 and vertex3), which are Point objects
public class Triangle {
    private Point v1;
    private Point v2;
    private Point v3;

    //constructor - receives the coordinates of all three vertexes as arguments
    public Triangle (double x1,double y1,double x2, double y2,double x3,double y3)
    {
    v1 = new Point(x1,y1);
    v2 = new Point(x2,y2);
    v3 = new Point(x3,y3);
    }
    
    //another constructor - receives as arguments only the coordinates of two vertexes 
    //and sets the third one to be the origin
    public Triangle (double x1,double y1,double x2, double y2)
    {
    v1 = new Point(x1,y1);
    v2 = new Point(x2,y2);
    v3 = new Point(0,0);
    }

    //another constructor - receives as arguments only the coordinates of two vertexes 
    //and sets the third one to be the origin

   //method to compute the perimeter of this triangle 
    //i.e., returns the sum of the lengths of all three sides of the triangle;
    //should use method distanceTo from class Point
    
    public double perimeter ()
    {
    return v1.distanceTo(v2)+v2.distanceTo(v3)+v3.distanceTo(v1);
    }
    
    //method to return the centroid of the triangle
    
    public Point centeroid ()
    {
    return new Point ((v1.getX()+v2.getX()+v3.getX())/3,(v1.getY()+v2.getY()+v3.getY())/3);
    }
    //method to return a deep copy of this triangle; the deep copy should not share any piece of memory with this triangle
    public Triangle copy()
    {
    return new Triangle (v1.getX(),v1.getY(),v2.getX(),v2.getY(),v3.getX(),v3.getY());
    }
    
    
    //method toString()
    
    public String toString ()
    {
    return "";
    }
}