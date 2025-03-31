package assignmentofmid;
class Room {
    private double length;
    private double width;

    public Room(double length, double width) {
        this.length = length;
        this.width = width;
    }

    public double calculateArea() {
        return length * width;
    }

    public void setLength(double length) {
        this.length = length;
    }

    public void setWidth(double width) {
        this.width = width;
    }
}

public class Problem15 {
    public static void main(String[] args){
  // Create a Room object with length 10 and width 5
  Room room = new Room(10.0, 5.0);

  // Access variables and calculate the area
  double area = room.calculateArea();

  // Print the area
  System.out.println("The area of the room is: " + area);
    }
}


