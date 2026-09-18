class MusicPlayer {

    void play(String song) {
        System.out.println("Playing: " + song);
    }
}

class SpotifyPlayer extends MusicPlayer {

    @Override
    void play(String song) {
        System.out.println("Streaming on Spotify: " + song);
    }
}

public class Main {

    public static void main(String[] args) {

        // Parent class reference, child class object
        MusicPlayer player = new SpotifyPlayer();

        // Calls SpotifyPlayer's overridden method
        player.play("Shape of You");
    }
}