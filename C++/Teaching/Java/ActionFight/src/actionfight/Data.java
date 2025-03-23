/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package actionfight;

/**
 *
 * @author onirbanmohi
 */
public class Data {
    
    
    
    static int round;
    static Player winner;
    static ArrayList<Player> players = new ArrayList<>();
    static void GetPlayers()
    {
        System.out.println("The players now are : ");
        for(int i = 0; i < players.size();i++)
        {
            System.out.println(players.get(i).name);
        }
    }
    
}
