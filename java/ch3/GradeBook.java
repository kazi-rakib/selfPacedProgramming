// Fig. 3.7: GradeBook.Java

public class GradeBook {

    private String courseName;

    public void setCourseName( String name ){
    	courseName = name;
	}

	public String getCourseName( ){
    	return courseName;
	}

	public void displayMessage()
	{

		System.out.printf("Welcome to the GradeBook for\n\t%s\n", getCourseName());

	} // end method displayMessage

} // end class GradeBook
