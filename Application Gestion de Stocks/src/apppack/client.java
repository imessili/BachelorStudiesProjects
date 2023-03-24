package apppack;

import java.io.Serializable;

public class client implements Serializable {

	
	private static final long serialVersionUID = 1L;
	
	private String id_client;
    private String nom_client;
    private String addresse_client;
    private String tel_client;
    private int nbr_achat;
    private float mnt_achat_ttl;
    
    public client(String id_client, String nom_client, String addresse_client, String tel_client,int nbr_achat )
    {
 	   
 	   this.id_client=id_client;

 	   this.nom_client=nom_client;

 	   this.addresse_client=addresse_client;

 	   this.tel_client=tel_client;
 	   
 	   this.nbr_achat=nbr_achat;
 	   
    }
    //Accesseurs

    public String getId_client() {
        return this.id_client;
    }

    public String getNom_client() {
        return this.nom_client;
    }

    public String getAddresse_client() {
        return this.addresse_client;
    }

    public String getTel_client() {
        return this.tel_client;
    }

    public int getNbr_achat() {
        return this.nbr_achat;
    }
    
    public float getmnt_achat_ttl() {
        return this.mnt_achat_ttl;
    }
    //Modificateur

    public void setId_client(String id_client) {
        this.id_client = id_client;
    }

    public void setNom_client(String nom_client) {
        this.nom_client = nom_client;
    }

    public void setAddresse_client(String addresse_client) {
        this.addresse_client = addresse_client;
    }

    public void setTel_client(String tel_client) {
        this.tel_client = tel_client;
    }

    public void setNbr_achat(int nbr_achat) {
        this.nbr_achat = nbr_achat;
    }
    
    public void setmnt_achat_ttl(float mnt_achat_ttl) {
        this.mnt_achat_ttl = mnt_achat_ttl;
    }
	
    public String toString()
	   {
	   	return " id_client: " +getId_client() + " nom_client: "+ getNom_client() + " addresse_client: "+getAddresse_client() +"\ntelephone_client: "+ getTel_client() +"\nnombre d'achat :"+getNbr_achat()+" \n---------------------------------------------------\n";
	                    
	   }
	    

	
}
