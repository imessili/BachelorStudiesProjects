package apppack;

import java.io.Serializable;

public class produit implements Serializable {
	   
	private static final long serialVersionUID = 1L;

	private String id_produit;

	   private String nom_produit;

	   private String categorie;

	   private int quantite;
	   
	   private float prix;
	   
	   private String carac;
	   
	   private int achat;
	   
     public produit() {
    	   
    	   this.id_produit="";

    	   this.nom_produit="";

    	   this.categorie="";

    	   this.quantite=0;
    	   
    	   this.prix=0;
    	   
    	   this.carac="";
    	   
    	   this.achat=0;
    	   
       }
	   
       public produit(String id_produit, String nom_produit, String categorie, int quantite, float prix,String carac) {
    	   
    	   this.id_produit=id_produit;

    	   this.nom_produit=nom_produit;

    	   this.categorie=categorie;

    	   this.quantite=quantite;
    	   
    	   this.prix=prix;
    	   
    	   this.carac=carac;
    	   
    	   this.achat=0;
    	   
       }
	   //Accesseurs

	   public String getId_produit() {

	       return this.id_produit;

	   }

	   public String getNom_produit() {

	       return this.nom_produit;

	   }

	   public String getCategorie() {

	       return this.categorie;

	   }

	   public int getQuantite() {

	       return this.quantite;

	   }
	   
	   public float getPrix() {

	       return this.prix;

	   }
	   
	   public String getcarac_produit() {

	       return this.carac;

	   }
	   
	   public int getAchat() {

	       return this.achat;

	   }

	   //Modificateur

	   public void setId_produit(String id_produit) {

	     this.id_produit = id_produit;

	   }

	   public void setNom_produit(String nom_produit) {

	       this.nom_produit = nom_produit;

	   }

	   public void setCategorie(String categorie) {

	       this.categorie = categorie;

	   }

	   public void setQuantite(int quantite) {

	       this.quantite = quantite;

	   }
	   
	   public void setPrix(float prix) {

	       this.prix = prix;

	   }
	   
	   public void setCarac_produit(String carac) {

		   this.carac = carac;

		   }
	   
	   public void setAchat(int achat) {

	       this.achat = achat;

	   }
	   
	   public String toString()
	   {
	   	return " id_produit: " +this.id_produit + " \nnom_produit: "+ this.nom_produit + " \ncategorie: "+this.categorie + " quantite: "+ this.quantite + " \nprix: " + this.prix+"\nCaractéristique :"+this.carac+ "\nachat: "+ this.achat +"\n---------------------------------------------------\n";
	                    }
	   
	   
}
