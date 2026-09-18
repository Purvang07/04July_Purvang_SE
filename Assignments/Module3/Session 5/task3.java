class Product {
    String name;
    String category;

    Product(String name, String category) {
        this.name = name;
        this.category = category;
    }
}

class FlipkartSearch {

    Product[] products = {
        new Product("iPhone 15", "Mobile"),
        new Product("Samsung Galaxy S24", "Mobile"),
        new Product("HP Laptop", "Laptop"),
        new Product("Dell Laptop", "Laptop")
    };

    // Search by product name
    void searchProduct(String name) {
        System.out.println("Searching for: " + name);

        for (Product product : products) {
            if (product.name.equalsIgnoreCase(name)) {
                System.out.println("Product found: " + product.name);
            }
        }
    }

    // Search by product name and category
    void searchProduct(String name, String category) {
        System.out.println("Searching for: " + name + " in " + category);

        for (Product product : products) {
            if (product.name.equalsIgnoreCase(name)
                    && product.category.equalsIgnoreCase(category)) {
                System.out.println("Product found: " + product.name);
            }
        }
    }
}

public class Main {

    public static void main(String[] args) {

        FlipkartSearch search = new FlipkartSearch();

        // Search using product name
        search.searchProduct("iPhone 15");

        System.out.println();

        // Search using product name and category
        search.searchProduct("HP Laptop", "Laptop");
    }
}