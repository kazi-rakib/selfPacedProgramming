import java.util.Scanner;

public class GradeBookTest
{
	// main method
	public static void main( String args[] )
	{
		Scanner input = new Scanner(System.in);

		//create a GradeBook object and assign it to myGradeBook
		GradeBook myGradeBook = new GradeBook();

		System.out.printf("Initial course name is: %s\n\n", myGradeBook.getCourseName() );

		System.out.println("Please enter the course name: ");
		String nameOfCourse = input.nextLine();
		myGradeBook.setCourseName(nameOfCourse);
		System.out.println("");

		// now GradeBook's method can be called
		myGradeBook.displayMessage();

	} // end method main


} // end class GradeBookTest
