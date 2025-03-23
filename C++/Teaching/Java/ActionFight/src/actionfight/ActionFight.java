/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package actionfight;

/**
 *
 * @author onirbanmohi
 */
public class ActionFight {

    /**
     * @param args the command line arguments
     */
     public static void main(String[] args)
    {
        Player player_one = new Player("Trump", 0, 0);
        Player player_two = new Player("Halim", 1, 1);
        Player player_three = new Player("Mohi", 1, 1);
        Data.GetPlayers();
        player_one.Move(5, 5);
        player_two.Attack();
        
    }
      
    
}
