package university.Java.labFinal.FileHandling;

import java.util.*;

public class Collection {

    public static void main(String[] args) {
        System.out.println("Hello World!");

        // List for exam subjects
        List<String> subjects = new ArrayList<>();
        subjects.add("Mathematics");
        subjects.add("Physics");
        subjects.add("Computer Science");

        // Set for registered students
        Set<String> students = new HashSet<>();
        students.add(" Smith");
        students.add("Jack");
        students.add("Bob");

        // Queue for students entering exam hall
        Queue<String> examQueue = new LinkedList<>();
        examQueue.add("Physics");
        examQueue.add("Chemistry");
        examQueue.add("Mathematics");

        // Map for student roll numbers and their marks
        Map<Integer, Integer> studentMarks = new HashMap<>();
        studentMarks.put(101, 88);
        studentMarks.put(102, 45);
        studentMarks.put(103, 76);

        // Printing Subjects
        System.out.println("Exam Subjects: " + subjects);

        // Printing Registered Students
        System.out.println("Registered Students: " + students);

        // Printing Exam Entry Queue
        System.out.println("Exam Entry Queue: " + examQueue);

        // Printing Student Marks with Result Category
        System.out.println("\n--- Exam Results ---");
        for (Map.Entry<Integer, Integer> entry : studentMarks.entrySet()) {
            int rollNo = entry.getKey();
            int marks = entry.getValue();

            System.out.print("Roll No " + rollNo + ": " + marks + " marks - ");

            if (marks > 80) {
                System.out.println("Passed with Distinction");
            } else if (marks >= 50) {
                System.out.println("Passed");
            } else {
                System.out.println("Needs Improvement");
            }
        }

    }
}