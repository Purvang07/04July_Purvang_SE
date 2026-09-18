class PaymentProcessor {

    // Method 1: Process payment without coupon
    void processPayment(double amount) {
        System.out.println("Payment processed without coupon.");
        System.out.println("Final Amount: " + amount);
    }

    // Method 2: Process payment with coupon
    void processPayment(double amount, String couponCode) {
        double finalAmount = amount;

        if (couponCode.equals("SAVE10")) {
            finalAmount = amount - (amount * 0.10);
        }

        System.out.println("Payment processed with coupon: " + couponCode);
        System.out.println("Final Amount: " + finalAmount);
    }

    public static void main(String[] args) {

        PaymentProcessor payment = new PaymentProcessor();

        // Calling first version
        payment.processPayment(1000);

        System.out.println();

        // Calling overloaded version
        payment.processPayment(1000, "SAVE10");
    }
}