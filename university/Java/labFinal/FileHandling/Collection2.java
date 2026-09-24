package university.Java.labFinal.FileHandling;

import java.util.*;

public class Collection2 {

    public static void main(String[] args) {
        System.out.println("Hello World!");

        // LIST Example
        List<String> list = new ArrayList<>();
        list.add("Banana");
        System.out.println("List: " + list);
        System.out.println("List contains 'Apple'? " + list.contains("Apple"));
        list.add("Apple");
        list.remove("Banana");
        System.out.println("List after remove: " + list);
        System.out.println("List size: " + list.size());
        list.clear();
        System.out.println("Is List empty? " + list.isEmpty());

        System.out.println("\n------------------------\n");

        // SET Example
        Set<String> set = new HashSet<>();
        set.add("Cat");
        set.add("Dog");
        System.out.println("Set: " + set);
        System.out.println("Set contains 'Dog'? " + set.contains("Dog"));
        set.remove("Cat");
        System.out.println("Set after remove: " + set);
        System.out.println("Set size: " + set.size());
        set.clear();
        System.out.println("Is Set empty? " + set.isEmpty());

        System.out.println("\n------------------------\n");

        // QUEUE Example
        Queue<String> queue = new LinkedList<>();
        queue.add("First");
        queue.add("Second");
        System.out.println("Queue: " + queue);
        System.out.println("Queue contains 'First'? " + queue.contains("First"));
        queue.remove("First");
        System.out.println("Queue after remove: " + queue);
        System.out.println("Queue size: " + queue.size());
        queue.clear();
        System.out.println("Is Queue empty? " + queue.isEmpty());

        System.out.println("\n------------------------\n");

        // MAP Example
        Map<Integer, String> map = new HashMap<>();
        map.put(3, "One");
        map.put(2, "Two");
        System.out.println("Map: " + map);
        System.out.println("Map contains key 1? " + map.containsKey(1));
        map.remove(2);
        System.out.println("Map after remove: " + map);
        System.out.println("Map size: " + map.size());
        map.clear();
        System.out.println("Is Map empty? " + map.isEmpty());
    }
}