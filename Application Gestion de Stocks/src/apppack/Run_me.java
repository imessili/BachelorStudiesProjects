package apppack;

import java.io.FileOutputStream;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;
import java.io.ObjectOutputStream;
import java.text.DateFormat;  
import java.text.SimpleDateFormat;  
import java.util.Date;  
import java.util.Calendar;  
import java.awt.EventQueue;
import java.util.Arrays;
import javax.swing.JFrame;
import javax.swing.JButton;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;
import javax.swing.JPanel;
import javax.swing.JScrollPane;
import java.awt.CardLayout;
import javax.swing.JLabel;
import javax.swing.SwingConstants;
import java.awt.Font;
import javax.swing.JTextField;
import javax.swing.JTextPane;
import java.awt.Color;

//Le programme déciment la quantité de produit pour chaque achat

//Le programme incrément la nombre d'achat d'un produit pour chaque achat

//La réduction de montant se fait après que le client dépasse 100000 et il est mis a 0 après

//La date est placer automatiquement dans le champ de date

/*
 * 
 Réalisé par:
Nom : MESSILI               Nom : YOUSFI 
Prénom : Islem              Prénom : Zakaria 
Matricule :181832024108     Matricule : 171732026950  

 */

public class Run_me {
	
	
	//Object permet d'utiliser les different methode implémenter sur les class
	List_produit Mylistp = new List_produit();
	List_client Mylistc = new List_client();
	List_commande Mylistcmd = new List_commande();
	
	//les JTextField sont utiliser pour recevoire des information du client
	private JFrame frame;
	private final JPanel Gclt_panel = new JPanel();
	private JTextField Id_clt = new JTextField(20);
	private JTextField nom_clt = new JTextField(50);
	private JTextField adr_clt = new JTextField(50);
	private JTextField numtl_clt = new JTextField(10);
	private JTextField mdfidclt;
	private JTextField mdfnclt;
	private JTextField mdfadrclt;
	private JTextField mdfntl;
	private JTextField mdfnbach;
	private JTextField suppidclt;
	private JTextField idetatclt;
	private JTextField idpmdf;
	private JTextField npmdf;
	private JTextField catpmdf;
	private JTextField qtemdf;
	private JTextField ppmdf;
	private JTextField Idpsupp;
	private JTextField idp;
	private JTextField np;
	private JTextField catp;
	private JTextField qtep;
	private JTextField pp;
	private JTextField num_cmd;
	private JTextField idc_cmd;
	private JTextField d_cmd;
	private JTextField num_cmd_supp;
	private JTextField n_cmd_mdf;
	private JTextField id_clt_cmd_mdf;
	private JTextField d_cmd_mdf;
	private JTextField catv;

	//la methode main qui permet l'execution du programme
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				
				//Deserialisation des 3 list qui ont ete serialiser avant de quitter
				//La serialisation sert a sauvgader les les object dans un fichier 
				//La deserialisation permet d'extrer ces information est elle est appliquer dans la methode run() just apres l'execution
				
				try
		        {
					//Creation de fichier pour sauvgarder les object global contenant nos information 
		            FileInputStream fis = new FileInputStream("MyData.ser");
		            ObjectInputStream ois = new ObjectInputStream(fis);
		            
		            clt_prd_cmd.Listc = (ArrayList) ois.readObject();
		            clt_prd_cmd.Listp = (ArrayList) ois.readObject();
		            clt_prd_cmd.Listcmd = (ArrayList) ois.readObject();
		            
		            //fermerteur de fichier 
		            ois.close();
		            fis.close();
		        }catch (IOException e) {
		        	
				} catch (ClassNotFoundException e) {
					
				} 
		       
				
				try {
					Run_me window = new Run_me();
					window.frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}

	/**
	 * Create the application.
	 */
	public Run_me() {
		initialize();
	}

	/**
	 * Initialize the contents of the frame.
	 */
	private void initialize() {
		frame = new JFrame();
		frame.setBounds(100, 100, 500, 600);
		frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		frame.getContentPane().setLayout(new CardLayout(0, 0));
		
		//Buttons permet le controlle de l'interface graphique
		//Quelque nom sont similaire a cause de copie coller
		
		JButton Button_Gclt = new JButton("Gestion des clients");
		JButton Button_Gprd = new JButton("Gestion des produits");
		JButton Button_Gcmd = new JButton("Gestion des commandes");
		JButton Button_quitter = new JButton("Quitter");
		JButton btn_ajtclt = new JButton("Ajouter client");
		JButton btn_suppclt = new JButton("Supprimer client");
		JButton btn_mdfclt = new JButton("Modifier client");
		JButton btn_afchLclt = new JButton("Afficher la liste Client");
		JButton btn_etatclt = new JButton("Afficher l\u2019\u00E9tat de fid\u00E9lisation des clients");
		JButton btn_quitclt = new JButton("Menu");
		JButton btn_quit_prd_mc = new JButton("Returner");
		JButton btn_quit_prd_pc = new JButton("Returner");
		JButton btn_quitlcmdpanel = new JButton("Returner");
		JButton btn_quit_supp_cmd = new JButton("Returner");
		JButton btn_supp_cmd = new JButton("Supprimer Commande");
		JButton btn_quitmdf_cmd = new JButton("Returner");
		JButton btn_mdf_cmd = new JButton("Modifier commande");
		JButton btn_quitajt_cmd = new JButton("Returner");
		JButton btn_ajtc_cmd = new JButton("Ajouter commande");
		JButton btn_valtype = new JButton("Valider");
		JButton btn_quitprdtype = new JButton("Returner");
		JButton btn_quitlst_prd = new JButton("Returner");
		JButton btn_quitsupp_prd = new JButton("Returner");
		JButton btn_supp_prd = new JButton("Supprimer produit");
		JButton btnNewButton = new JButton("Valider");
		JButton btn_ajtprd = new JButton("Ajouter Produit");
		JButton btn_suppprd = new JButton("Supprimer Produit");
		JButton btn_mdfprd = new JButton("Modifier Produit");
		JButton btn_afchLprd = new JButton("Afficher la liste Produit");
		JButton btn_catLprd_1 = new JButton("Afficher la liste Produit par type de produit");
		JButton btn_quitclt_1 = new JButton("Menu");
		JButton btn_ajtcmd = new JButton("Ajouter Commande");
		JButton btn_suppcmd = new JButton("Supprimer Commande");
		JButton btn_mdfcmd = new JButton("Modifier Commande");
		JButton btn_afchLcmd1 = new JButton("Afficher la liste des commandes");
		JButton afchLcmd3 = new JButton("Afficher la liste des commandes r\u00E9serv\u00E9es");
		JButton afchLcmd4 = new JButton("Afficher le produit le plus commercialis\u00E9");
		JButton afchLcmd5 = new JButton("Afficher le produit le moins commercialis\u00E9 ");
		JButton btn_quitcmd_1 = new JButton("Menu");
		JButton btn_mdf_prd = new JButton("Modifier produit");
		JButton btn_quitmdf_prd = new JButton("Returner");
		JButton btn_ajtclt_1_1_3 = new JButton("Valider");
		JButton btn_supp_clt = new JButton("Supprimer client");
		JButton btn_quitsuppclt_ = new JButton("Returner");
		JButton btn_etatclt_1 = new JButton("Afficher l'etat de client");
		JButton btn_quitettclt1 = new JButton("Returner");
		JButton btn_ajt_prd = new JButton("Ajouter produit");
		JButton btn_quit_ajtprd = new JButton("Returner");
		JButton btn_quitLclt_ = new JButton("Returner");
		JButton btn_mdf_clt = new JButton("Modifier client");
		JButton btn_quitmdfclt_ = new JButton("Returner");
		JButton btn_ajtclt_ = new JButton("Ajouter client");
		JButton btn_quitclt_ = new JButton("Returner");
		
		
		//Paramètres de l'interface utilisateur
		//Positionnement des button ,des panel, est les texte fields
		//Ajouter tout les compasant au main frame
		JPanel menu = new JPanel();
		menu.setLayout(null);
		frame.getContentPane().add(menu, "name_452492522793786");
		
		JPanel Gprd_panel = new JPanel();
		frame.getContentPane().add(Gprd_panel, "name_451961893952683");
		Gprd_panel.setLayout(null);
		
		
		btn_ajtprd.setBounds(152, 82, 154, 30);
		Gprd_panel.add(btn_ajtprd);
		
		
		btn_suppprd.setBounds(152, 132, 154, 30);
		Gprd_panel.add(btn_suppprd);
		
		
		btn_mdfprd.setBounds(152, 182, 154, 30);
		Gprd_panel.add(btn_mdfprd);
		
		
		btn_afchLprd.setBounds(152, 232, 154, 30);
		Gprd_panel.add(btn_afchLprd);
		
		
		btn_catLprd_1.setBounds(152, 282, 154, 30);
		Gprd_panel.add(btn_catLprd_1);
		
		
		btn_quitclt_1.setBounds(152, 332, 154, 30);
		Gprd_panel.add(btn_quitclt_1);
		
		JPanel Gcmd_panel = new JPanel();
		frame.getContentPane().add(Gcmd_panel, "name_451961936135240");
		Gcmd_panel.setLayout(null);
		
		btn_ajtcmd.setBounds(166, 25, 154, 30);
		Gcmd_panel.add(btn_ajtcmd);
		
		btn_suppcmd.setBounds(166, 66, 154, 30);
		Gcmd_panel.add(btn_suppcmd);
		
		btn_mdfcmd.setBounds(166, 107, 154, 30);
		Gcmd_panel.add(btn_mdfcmd);
		
		btn_afchLcmd1.setBounds(54, 162, 370, 30);
		Gcmd_panel.add(btn_afchLcmd1);
		
		afchLcmd3.setBounds(54, 203, 370, 30);
		Gcmd_panel.add(afchLcmd3);
		
		afchLcmd4.setBounds(54, 244, 370, 30);
		Gcmd_panel.add(afchLcmd4);
		
		afchLcmd5.setBounds(54, 285, 370, 30);
		Gcmd_panel.add(afchLcmd5);
		
		btn_quitcmd_1.setBounds(151, 422, 183, 30);
		Gcmd_panel.add(btn_quitcmd_1);
		
		Button_Gclt.setBounds(127, 54, 215, 46);
		menu.add(Button_Gclt);
		
		Button_Gprd.setBounds(127, 128, 215, 46);
		menu.add(Button_Gprd);
		
		Button_Gcmd.setBounds(127, 201, 215, 46);
		menu.add(Button_Gcmd);
		
		Button_quitter.setBounds(127, 271, 215, 46);
		menu.add(Button_quitter);
		frame.getContentPane().add(Gclt_panel, "name_451961853299738");
		Gclt_panel.setLayout(null);
		
		btn_ajtclt.setBounds(147, 50, 154, 30);
		Gclt_panel.add(btn_ajtclt);
		
		btn_suppclt.setBounds(147, 100, 154, 30);
		Gclt_panel.add(btn_suppclt);
		
		btn_mdfclt.setBounds(147, 150, 154, 30);
		Gclt_panel.add(btn_mdfclt);
		
		btn_afchLclt.setBounds(147, 200, 154, 30);
		Gclt_panel.add(btn_afchLclt);
		
		btn_etatclt.setBounds(147, 250, 154, 30);
		Gclt_panel.add(btn_etatclt);
		
		btn_quitclt.setBounds(147, 300, 154, 30);
		Gclt_panel.add(btn_quitclt);
		
		JPanel ajtclt_panel = new JPanel();
		ajtclt_panel.setLayout(null);
		frame.getContentPane().add(ajtclt_panel, "name_459136597014907");
		
		btn_ajtclt_.setBounds(299, 443, 154, 30);
		ajtclt_panel.add(btn_ajtclt_);
		
		btn_quitclt_.setBounds(28, 443, 154, 30);
		ajtclt_panel.add(btn_quitclt_);
		
		JLabel ajtcltLabel = new JLabel("*********Ajoute d'un client**********");
		ajtcltLabel.setHorizontalAlignment(SwingConstants.CENTER);
		ajtcltLabel.setFont(new Font("Cambria", Font.BOLD, 14));
		ajtcltLabel.setBounds(64, 11, 310, 30);
		ajtclt_panel.add(ajtcltLabel);
		
		Id_clt = new JTextField();
		Id_clt.setColumns(10);
		Id_clt.setBounds(28, 89, 255, 20);
		ajtclt_panel.add(Id_clt);
		
		nom_clt = new JTextField();
		nom_clt.setColumns(10);
		nom_clt.setBounds(28, 156, 255, 20);
		ajtclt_panel.add(nom_clt);
		
		adr_clt = new JTextField();
		adr_clt.setColumns(10);
		adr_clt.setBounds(28, 234, 255, 20);
		ajtclt_panel.add(adr_clt);
		
		numtl_clt = new JTextField();
		numtl_clt.setColumns(10);
		numtl_clt.setBounds(28, 298, 255, 20);
		ajtclt_panel.add(numtl_clt);
		
		JLabel lblNewLabel = new JLabel("ID Client");
		lblNewLabel.setBounds(32, 62, 119, 14);
		ajtclt_panel.add(lblNewLabel);
		
		JLabel lblNomClient = new JLabel("Nom Client");
		lblNomClient.setBounds(28, 131, 123, 14);
		ajtclt_panel.add(lblNomClient);
		
		JLabel lblAdresseClient = new JLabel("Adresse Client");
		lblAdresseClient.setBounds(28, 211, 123, 12);
		ajtclt_panel.add(lblAdresseClient);
		
		JLabel lblNumeroTelephoneClient = new JLabel("Numero Telephone Client");
		lblNumeroTelephoneClient.setBounds(28, 276, 134, 14);
		ajtclt_panel.add(lblNumeroTelephoneClient);
		
		JLabel errorclt = new JLabel("");
		errorclt.setForeground(Color.RED);
		errorclt.setFont(new Font("Tahoma", Font.PLAIN, 11));
		errorclt.setBounds(85, 62, 198, 14);
		ajtclt_panel.add(errorclt);
		
		JPanel Lclt_panel = new JPanel();
		frame.getContentPane().add(Lclt_panel, "name_459413720927698");
		Lclt_panel.setLayout(null);
		
		JLabel lbllistDesClients = new JLabel("*********List des clients**********");
		lbllistDesClients.setHorizontalAlignment(SwingConstants.CENTER);
		lbllistDesClients.setFont(new Font("Cambria", Font.BOLD, 14));
		lbllistDesClients.setBounds(71, 23, 316, 30);
		Lclt_panel.add(lbllistDesClients);
		
		btn_quitLclt_.setBounds(158, 504, 154, 30);
		Lclt_panel.add(btn_quitLclt_);
		
		JPanel mdfclt_panel = new JPanel();
		mdfclt_panel.setLayout(null);
		frame.getContentPane().add(mdfclt_panel, "name_499805876053261");
		
		btn_mdf_clt.setBounds(299, 443, 154, 30);
		mdfclt_panel.add(btn_mdf_clt);
		
		btn_quitmdfclt_.setBounds(28, 443, 154, 30);
		mdfclt_panel.add(btn_quitmdfclt_);
		
		JLabel lblmodificationDunClient = new JLabel("*********Modification d'un client**********");
		lblmodificationDunClient.setHorizontalAlignment(SwingConstants.CENTER);
		lblmodificationDunClient.setFont(new Font("Cambria", Font.BOLD, 14));
		lblmodificationDunClient.setBounds(64, 11, 310, 30);
		mdfclt_panel.add(lblmodificationDunClient);
		
		mdfidclt = new JTextField();
		mdfidclt.setColumns(10);
		mdfidclt.setBounds(28, 64, 255, 20);
		mdfclt_panel.add(mdfidclt);
		
		mdfnclt = new JTextField();
		mdfnclt.setEnabled(false);
		mdfnclt.setColumns(10);
		mdfnclt.setBounds(28, 156, 255, 20);
		mdfclt_panel.add(mdfnclt);
		
		mdfadrclt = new JTextField();
		mdfadrclt.setEnabled(false);
		mdfadrclt.setColumns(10);
		mdfadrclt.setBounds(28, 234, 255, 20);
		mdfclt_panel.add(mdfadrclt);
		
		mdfntl = new JTextField();
		mdfntl.setColumns(10);
		mdfntl.setBounds(28, 298, 255, 20);
		mdfclt_panel.add(mdfntl);
		
		mdfnbach = new JTextField();
		mdfnbach.setEnabled(false);
		mdfnbach.setColumns(10);
		mdfnbach.setBounds(28, 370, 255, 20);
		mdfclt_panel.add(mdfnbach);
		
		JLabel lblNewLabel_1 = new JLabel("ID Client");
		lblNewLabel_1.setBounds(28, 39, 119, 14);
		mdfclt_panel.add(lblNewLabel_1);
		
		JLabel lblNomClient_1 = new JLabel("Nom Client");
		lblNomClient_1.setBounds(28, 131, 123, 14);
		mdfclt_panel.add(lblNomClient_1);
		
		JLabel lblAdresseClient_1 = new JLabel("Adresse Client");
		lblAdresseClient_1.setBounds(28, 211, 123, 12);
		mdfclt_panel.add(lblAdresseClient_1);
		
		JLabel lblNumeroTelephoneClient_1 = new JLabel("Numero Telephone Client");
		lblNumeroTelephoneClient_1.setBounds(28, 276, 134, 14);
		mdfclt_panel.add(lblNumeroTelephoneClient_1);
		
		JLabel lblNombreDachat_1 = new JLabel("Nombre d'achat");
		lblNombreDachat_1.setBounds(28, 345, 123, 14);
		mdfclt_panel.add(lblNombreDachat_1);
		
		btn_ajtclt_1_1_3.setBounds(38, 95, 82, 20);
		mdfclt_panel.add(btn_ajtclt_1_1_3);
		
		JPanel suppclt_panel = new JPanel();
		suppclt_panel.setLayout(null);
		frame.getContentPane().add(suppclt_panel, "name_500189957165334");
		
		btn_supp_clt.setBounds(299, 443, 154, 30);
		suppclt_panel.add(btn_supp_clt);
		
		btn_quitsuppclt_.setBounds(28, 443, 154, 30);
		suppclt_panel.add(btn_quitsuppclt_);
		
		JLabel lblsuppritionDunClient = new JLabel("*********Supprition d'un client**********");
		lblsuppritionDunClient.setHorizontalAlignment(SwingConstants.CENTER);
		lblsuppritionDunClient.setFont(new Font("Cambria", Font.BOLD, 14));
		lblsuppritionDunClient.setBounds(64, 11, 310, 30);
		suppclt_panel.add(lblsuppritionDunClient);
		
		suppidclt = new JTextField();
		suppidclt.setColumns(10);
		suppidclt.setBounds(97, 217, 255, 20);
		suppclt_panel.add(suppidclt);
		
		JLabel lblNewLabel_1_1 = new JLabel("ID Client");
		lblNewLabel_1_1.setBounds(112, 192, 119, 14);
		suppclt_panel.add(lblNewLabel_1_1);
		
		JPanel etatclt_panel = new JPanel();
		etatclt_panel.setLayout(null);
		frame.getContentPane().add(etatclt_panel, "name_500612072589666");
		
		btn_etatclt_1.setBounds(299, 443, 154, 30);
		etatclt_panel.add(btn_etatclt_1);
		
		btn_quitettclt1.setBounds(28, 443, 154, 30);
		etatclt_panel.add(btn_quitettclt1);
		
		JLabel lbletatDeFidlisation = new JLabel("*********Etat de fid\u00E9lisation d'un client**********");
		lbletatDeFidlisation.setHorizontalAlignment(SwingConstants.CENTER);
		lbletatDeFidlisation.setFont(new Font("Cambria", Font.BOLD, 14));
		lbletatDeFidlisation.setBounds(64, 11, 310, 30);
		etatclt_panel.add(lbletatDeFidlisation);
		
		idetatclt = new JTextField();
		idetatclt.setColumns(10);
		idetatclt.setBounds(87, 103, 255, 20);
		etatclt_panel.add(idetatclt);
		
		JLabel lblNewLabel_1_1_1 = new JLabel("ID Client");
		lblNewLabel_1_1_1.setBounds(97, 77, 119, 14);
		etatclt_panel.add(lblNewLabel_1_1_1);
		
		JTextPane etatclt = new JTextPane();
		etatclt.setEditable(false);
		etatclt.setFont(new Font("Sitka Display", Font.PLAIN, 16));
		etatclt.setBounds(110, 158, 213, 30);
		etatclt_panel.add(etatclt);
		
		JTextPane cartefdlt = new JTextPane();
		cartefdlt.setEnabled(false);
		cartefdlt.setBounds(64, 237, 353, 162);
		etatclt_panel.add(cartefdlt);
		
		JPanel ajtprd_panel = new JPanel();
		ajtprd_panel.setLayout(null);
		frame.getContentPane().add(ajtprd_panel, "name_503997390443457");
		
		
		btn_ajt_prd.setBounds(298, 493, 154, 30);
		ajtprd_panel.add(btn_ajt_prd);
		
		btn_quit_ajtprd.setBounds(25, 493, 154, 30);
		ajtprd_panel.add(btn_quit_ajtprd);
		
		JLabel lblmodificationDunClient_1_1 = new JLabel("*********Ajoute d'un produit**********");
		lblmodificationDunClient_1_1.setHorizontalAlignment(SwingConstants.CENTER);
		lblmodificationDunClient_1_1.setFont(new Font("Cambria", Font.BOLD, 14));
		lblmodificationDunClient_1_1.setBounds(61, 26, 310, 30);
		ajtprd_panel.add(lblmodificationDunClient_1_1);
		
		idp = new JTextField();
		idp.setColumns(10);
		idp.setBounds(25, 83, 255, 20);
		ajtprd_panel.add(idp);
		
		np = new JTextField();
		np.setColumns(10);
		np.setBounds(25, 139, 255, 20);
		ajtprd_panel.add(np);
		
		catp = new JTextField();
		catp.setColumns(10);
		catp.setBounds(25, 196, 255, 20);
		ajtprd_panel.add(catp);
		
		qtep = new JTextField();
		qtep.setColumns(10);
		qtep.setBounds(25, 252, 255, 20);
		ajtprd_panel.add(qtep);
		
		pp = new JTextField();
		pp.setColumns(10);
		pp.setBounds(25, 308, 255, 20);
		ajtprd_panel.add(pp);
		
		JLabel lblNewLabel_1_2_1 = new JLabel("ID Produit");
		lblNewLabel_1_2_1.setBounds(25, 58, 119, 14);
		ajtprd_panel.add(lblNewLabel_1_2_1);
		
		JLabel lblNomClient_1_1_1 = new JLabel("Nom Produit");
		lblNomClient_1_1_1.setBounds(25, 114, 123, 14);
		ajtprd_panel.add(lblNomClient_1_1_1);
		
		JLabel lblAdresseClient_1_1_1 = new JLabel("Categorie");
		lblAdresseClient_1_1_1.setBounds(25, 173, 123, 12);
		ajtprd_panel.add(lblAdresseClient_1_1_1);
		
		JLabel lblNumeroTelephoneClient_1_1_1 = new JLabel("Quantite");
		lblNumeroTelephoneClient_1_1_1.setBounds(25, 227, 134, 14);
		ajtprd_panel.add(lblNumeroTelephoneClient_1_1_1);
		
		JLabel lblNombreDachat_1_1_1 = new JLabel("Prix");
		lblNombreDachat_1_1_1.setBounds(25, 283, 123, 14);
		ajtprd_panel.add(lblNombreDachat_1_1_1);
		
		JTextPane pcar = new JTextPane();
		pcar.setBounds(25, 375, 427, 107);
		ajtprd_panel.add(pcar);
		
		JLabel lblNombreDachat_1_1_1_1 = new JLabel("Caract\u00E9ristique");
		lblNombreDachat_1_1_1_1.setBounds(25, 348, 123, 14);
		ajtprd_panel.add(lblNombreDachat_1_1_1_1);
		
		JLabel errorprd = new JLabel("");
		errorprd.setForeground(Color.RED);
		errorprd.setBounds(123, 58, 200, 14);
		ajtprd_panel.add(errorprd);
		
		JPanel mdfprd_panel = new JPanel();
		mdfprd_panel.setLayout(null);
		frame.getContentPane().add(mdfprd_panel, "name_503999216043203");
		
		btn_mdf_prd.setBounds(294, 498, 154, 30);
		mdfprd_panel.add(btn_mdf_prd);
		
		btn_quitmdf_prd.setBounds(28, 498, 154, 30);
		mdfprd_panel.add(btn_quitmdf_prd);
		
		JLabel lblmodificationDunClient_1 = new JLabel("*********Modification d'un produit**********");
		lblmodificationDunClient_1.setHorizontalAlignment(SwingConstants.CENTER);
		lblmodificationDunClient_1.setFont(new Font("Cambria", Font.BOLD, 14));
		lblmodificationDunClient_1.setBounds(64, 11, 310, 30);
		mdfprd_panel.add(lblmodificationDunClient_1);
		
		idpmdf = new JTextField();
		idpmdf.setColumns(10);
		idpmdf.setBounds(28, 62, 255, 20);
		mdfprd_panel.add(idpmdf);
		
		npmdf = new JTextField();
		npmdf.setEnabled(false);
		npmdf.setColumns(10);
		npmdf.setBounds(28, 156, 255, 20);
		mdfprd_panel.add(npmdf);
		
		catpmdf = new JTextField();
		catpmdf.setEnabled(false);
		catpmdf.setColumns(10);
		catpmdf.setBounds(28, 210, 255, 20);
		mdfprd_panel.add(catpmdf);
		
		qtemdf = new JTextField();
		qtemdf.setEnabled(false);
		qtemdf.setColumns(10);
		qtemdf.setBounds(28, 266, 255, 20);
		mdfprd_panel.add(qtemdf);
		
		ppmdf = new JTextField();
		ppmdf.setEnabled(false);
		ppmdf.setColumns(10);
		ppmdf.setBounds(28, 322, 255, 20);
		mdfprd_panel.add(ppmdf);
		
		JLabel lblNewLabel_1_2 = new JLabel("ID Produit");
		lblNewLabel_1_2.setBounds(28, 40, 119, 14);
		mdfprd_panel.add(lblNewLabel_1_2);
		
		JLabel lblNomClient_1_1 = new JLabel("Nom Produit");
		lblNomClient_1_1.setBounds(28, 131, 123, 14);
		mdfprd_panel.add(lblNomClient_1_1);
		
		JLabel lblAdresseClient_1_1 = new JLabel("Categorie");
		lblAdresseClient_1_1.setBounds(28, 187, 123, 12);
		mdfprd_panel.add(lblAdresseClient_1_1);
		
		JLabel lblNumeroTelephoneClient_1_1 = new JLabel("Quantite");
		lblNumeroTelephoneClient_1_1.setBounds(28, 241, 134, 14);
		mdfprd_panel.add(lblNumeroTelephoneClient_1_1);
		
		JLabel lblNombreDachat_1_1 = new JLabel("Prix");
		lblNombreDachat_1_1.setBounds(28, 297, 123, 14);
		mdfprd_panel.add(lblNombreDachat_1_1);
		
		
		btnNewButton.setBounds(38, 93, 81, 20);
		mdfprd_panel.add(btnNewButton);
		
		JLabel lblNombreDachat_1_1_1_1_1 = new JLabel("Caract\u00E9ristique");
		lblNombreDachat_1_1_1_1_1.setBounds(28, 353, 123, 14);
		mdfprd_panel.add(lblNombreDachat_1_1_1_1_1);
		
		JTextPane pcar_mdf = new JTextPane();
		pcar_mdf.setEnabled(false);
		pcar_mdf.setBounds(28, 380, 427, 107);
		mdfprd_panel.add(pcar_mdf);
		
		JPanel suppprd_panel = new JPanel();
		suppprd_panel.setLayout(null);
		frame.getContentPane().add(suppprd_panel, "name_504000900580739");
		
		btn_supp_prd.setBounds(299, 443, 154, 30);
		suppprd_panel.add(btn_supp_prd);
		
		btn_quitsupp_prd.setBounds(28, 443, 154, 30);
		suppprd_panel.add(btn_quitsupp_prd);
		
		JLabel lblsuppritionDunClient_1 = new JLabel("*********Supprition d'un produit**********");
		lblsuppritionDunClient_1.setHorizontalAlignment(SwingConstants.CENTER);
		lblsuppritionDunClient_1.setFont(new Font("Cambria", Font.BOLD, 14));
		lblsuppritionDunClient_1.setBounds(64, 11, 310, 30);
		suppprd_panel.add(lblsuppritionDunClient_1);
		
		Idpsupp = new JTextField();
		Idpsupp.setColumns(10);
		Idpsupp.setBounds(97, 217, 255, 20);
		suppprd_panel.add(Idpsupp);
		
		JLabel lblNewLabel_1_1_2 = new JLabel("ID Produit");
		lblNewLabel_1_1_2.setBounds(112, 192, 119, 14);
		suppprd_panel.add(lblNewLabel_1_1_2);
		
		JPanel Lprd_panel = new JPanel();
		Lprd_panel.setLayout(null);
		frame.getContentPane().add(Lprd_panel, "name_504296488921266");
		
		JLabel lbllistDesClients_1 = new JLabel("*********List des Produit**********");
		lbllistDesClients_1.setHorizontalAlignment(SwingConstants.CENTER);
		lbllistDesClients_1.setFont(new Font("Cambria", Font.BOLD, 14));
		lbllistDesClients_1.setBounds(71, 23, 316, 30);
		Lprd_panel.add(lbllistDesClients_1);
		
		btn_quitlst_prd.setBounds(158, 504, 154, 30);
		Lprd_panel.add(btn_quitlst_prd);
		
		JTextPane list_prd = new JTextPane();
		list_prd.setBounds(10, 64, 464, 425);
		Lprd_panel.add(list_prd);
		
		JScrollPane scrollBarP = new JScrollPane(list_prd);
		Lprd_panel.add(scrollBarP);
		scrollBarP.setBounds(10, 64, 464, 429);
		
		JPanel Lprdtype_panel = new JPanel();
		Lprdtype_panel.setLayout(null);
		frame.getContentPane().add(Lprdtype_panel, "name_504306601660191");
		
		btn_quitprdtype.setBounds(159, 487, 154, 30);
		Lprdtype_panel.add(btn_quitprdtype);
		
		JLabel lbletatDeFidlisation_1 = new JLabel("********* Liste Produit par categorie  de produit**********");
		lbletatDeFidlisation_1.setHorizontalAlignment(SwingConstants.CENTER);
		lbletatDeFidlisation_1.setFont(new Font("Cambria", Font.BOLD, 14));
		lbletatDeFidlisation_1.setBounds(64, 11, 310, 30);
		Lprdtype_panel.add(lbletatDeFidlisation_1);
		
		JTextPane list_prd_cat = new JTextPane();
		list_prd_cat.setBounds(10, 95, 464, 381);
		Lprdtype_panel.add(list_prd_cat);
		
		catv = new JTextField();
		catv.setBounds(30, 64, 167, 21);
		Lprdtype_panel.add(catv);
		catv.setColumns(10);
		
		JLabel lblNewLabel_2 = new JLabel("Entrer la Categorie ");
		lblNewLabel_2.setFont(new Font("Tahoma", Font.PLAIN, 12));
		lblNewLabel_2.setBounds(30, 40, 117, 20);
		Lprdtype_panel.add(lblNewLabel_2);
		
		
		btn_valtype.setBounds(240, 61, 89, 23);
		Lprdtype_panel.add(btn_valtype);
		
		JPanel ajtcmd_panel = new JPanel();
		ajtcmd_panel.setLayout(null);
		frame.getContentPane().add(ajtcmd_panel, "name_504978513108874");
		
		
		btn_ajtc_cmd.setBounds(296, 458, 154, 30);
		ajtcmd_panel.add(btn_ajtc_cmd);
		
		btn_quitajt_cmd.setBounds(25, 458, 154, 30);
		ajtcmd_panel.add(btn_quitajt_cmd);
		
		JLabel lblmodificationDunClient_1_1_1 = new JLabel("*********Ajoute d'une commande**********");
		lblmodificationDunClient_1_1_1.setHorizontalAlignment(SwingConstants.CENTER);
		lblmodificationDunClient_1_1_1.setFont(new Font("Cambria", Font.BOLD, 14));
		lblmodificationDunClient_1_1_1.setBounds(61, 26, 310, 30);
		ajtcmd_panel.add(lblmodificationDunClient_1_1_1);
		
		num_cmd = new JTextField();
		num_cmd.setColumns(10);
		num_cmd.setBounds(25, 104, 255, 20);
		ajtcmd_panel.add(num_cmd);
		
		idc_cmd = new JTextField();
		idc_cmd.setColumns(10);
		idc_cmd.setBounds(25, 171, 255, 20);
		ajtcmd_panel.add(idc_cmd);
		
		d_cmd = new JTextField();
		d_cmd.setColumns(10);
		d_cmd.setBounds(25, 359, 255, 20);
		ajtcmd_panel.add(d_cmd);
		
		Date date = Calendar.getInstance().getTime();  
        DateFormat dateFormat = new SimpleDateFormat("yyyy-mm-dd hh:mm:ss");  
        String strDate = dateFormat.format(date);
        d_cmd.setText(strDate);
		
		JLabel lblNewLabel_1_2_1_1 = new JLabel("Numero commande");
		lblNewLabel_1_2_1_1.setBounds(29, 77, 119, 14);
		ajtcmd_panel.add(lblNewLabel_1_2_1_1);
		
		JLabel lblNomClient_1_1_1_1 = new JLabel("Id client");
		lblNomClient_1_1_1_1.setBounds(25, 146, 123, 14);
		ajtcmd_panel.add(lblNomClient_1_1_1_1);
		
		JLabel lblAdresseClient_1_1_1_1 = new JLabel("Produit acheter par le client");
		lblAdresseClient_1_1_1_1.setBounds(25, 226, 174, 12);
		ajtcmd_panel.add(lblAdresseClient_1_1_1_1);
		
		JLabel lblNumeroTelephoneClient_1_1_1_1 = new JLabel("Date d'achat");
		lblNumeroTelephoneClient_1_1_1_1.setBounds(26, 334, 134, 14);
		ajtcmd_panel.add(lblNumeroTelephoneClient_1_1_1_1);
		
		JTextPane idp_cmd = new JTextPane();
		idp_cmd.setBounds(25, 249, 255, 74);
		ajtcmd_panel.add(idp_cmd);
		
		JLabel errorcmd = new JLabel("");
		errorcmd.setForeground(Color.RED);
		errorcmd.setBounds(157, 77, 200, 14);
		ajtcmd_panel.add(errorcmd);
		
		JPanel cmd_mdf_panel = new JPanel();
		cmd_mdf_panel.setLayout(null);
		frame.getContentPane().add(cmd_mdf_panel, "name_504980087172100");
		
		JLabel lblmodificationDunClient_1_2 = new JLabel("*********Modification d'une commande**********");
		lblmodificationDunClient_1_2.setHorizontalAlignment(SwingConstants.CENTER);
		lblmodificationDunClient_1_2.setFont(new Font("Cambria", Font.BOLD, 14));
		lblmodificationDunClient_1_2.setBounds(64, 11, 310, 30);
		cmd_mdf_panel.add(lblmodificationDunClient_1_2);
		
		btn_mdf_cmd.setBounds(307, 443, 154, 30);
		cmd_mdf_panel.add(btn_mdf_cmd);
		
		btn_quitmdf_cmd.setBounds(36, 443, 154, 30);
		cmd_mdf_panel.add(btn_quitmdf_cmd);
		
		n_cmd_mdf = new JTextField();
		n_cmd_mdf.setColumns(10);
		n_cmd_mdf.setBounds(36, 89, 255, 20);
		cmd_mdf_panel.add(n_cmd_mdf);
		
		id_clt_cmd_mdf = new JTextField();
		id_clt_cmd_mdf.setColumns(10);
		id_clt_cmd_mdf.setBounds(36, 156, 255, 20);
		cmd_mdf_panel.add(id_clt_cmd_mdf);
		
		d_cmd_mdf = new JTextField();
		d_cmd_mdf.setColumns(10);
		d_cmd_mdf.setBounds(36, 344, 255, 20);
		cmd_mdf_panel.add(d_cmd_mdf);
		
		Date datemdf = Calendar.getInstance().getTime();  
        DateFormat dateFormatmdf = new SimpleDateFormat("yyyy-mm-dd hh:mm:ss");  
        String strDatemdf = dateFormatmdf.format(datemdf);
        d_cmd_mdf.setText(strDatemdf);
		
		JLabel lblNewLabel_1_2_1_1_1 = new JLabel("Numero commande");
		lblNewLabel_1_2_1_1_1.setBounds(40, 62, 119, 14);
		cmd_mdf_panel.add(lblNewLabel_1_2_1_1_1);
		
		JLabel lblNomClient_1_1_1_1_1 = new JLabel("Id client");
		lblNomClient_1_1_1_1_1.setBounds(36, 131, 123, 14);
		cmd_mdf_panel.add(lblNomClient_1_1_1_1_1);
		
		JLabel lblAdresseClient_1_1_1_1_1 = new JLabel("Produit acheter par le client");
		lblAdresseClient_1_1_1_1_1.setBounds(36, 211, 174, 12);
		cmd_mdf_panel.add(lblAdresseClient_1_1_1_1_1);
		
		JLabel lblNumeroTelephoneClient_1_1_1_1_1 = new JLabel("Date d'achat");
		lblNumeroTelephoneClient_1_1_1_1_1.setBounds(37, 319, 134, 14);
		cmd_mdf_panel.add(lblNumeroTelephoneClient_1_1_1_1_1);
		
		JTextPane id_prd_cmd_mdf = new JTextPane();
		id_prd_cmd_mdf.setBounds(36, 234, 255, 74);
		cmd_mdf_panel.add(id_prd_cmd_mdf);
		
		JPanel suppcmd_panel = new JPanel();
		suppcmd_panel.setLayout(null);
		frame.getContentPane().add(suppcmd_panel, "name_504981874057462");
		
		btn_supp_cmd.setBounds(299, 443, 154, 30);
		suppcmd_panel.add(btn_supp_cmd);
		
		
		btn_quit_supp_cmd.setBounds(28, 443, 154, 30);
		suppcmd_panel.add(btn_quit_supp_cmd);
		
		JLabel lblsuppritionDunClient_1_1 = new JLabel("*********Supprition d'une commande**********");
		lblsuppritionDunClient_1_1.setHorizontalAlignment(SwingConstants.CENTER);
		lblsuppritionDunClient_1_1.setFont(new Font("Cambria", Font.BOLD, 14));
		lblsuppritionDunClient_1_1.setBounds(64, 11, 310, 30);
		suppcmd_panel.add(lblsuppritionDunClient_1_1);
		
		num_cmd_supp = new JTextField();
		num_cmd_supp.setColumns(10);
		num_cmd_supp.setBounds(97, 217, 255, 20);
		suppcmd_panel.add(num_cmd_supp);
		
		JLabel lblNewLabel_1_1_2_1 = new JLabel("Numero Commande");
		lblNewLabel_1_1_2_1.setBounds(112, 192, 119, 14);
		suppcmd_panel.add(lblNewLabel_1_1_2_1);	
		
		JTextPane list_clt = new JTextPane();
		list_clt.setBounds(10, 64, 464, 418);
		Lclt_panel.add(list_clt);
		
		JScrollPane scrollBarC = new JScrollPane(list_clt);
		Lclt_panel.add(scrollBarC);
		scrollBarC.setBounds(10, 64, 464, 429);
		
		JPanel Lcmd_panel = new JPanel();
		Lcmd_panel.setLayout(null);
		frame.getContentPane().add(Lcmd_panel, "name_608366888992003");
		
		JLabel lbllistDesClients_1_1 = new JLabel("*********List des Commandes**********");
		lbllistDesClients_1_1.setHorizontalAlignment(SwingConstants.CENTER);
		lbllistDesClients_1_1.setFont(new Font("Cambria", Font.BOLD, 14));
		lbllistDesClients_1_1.setBounds(71, 23, 316, 30);
		Lcmd_panel.add(lbllistDesClients_1_1);
		
		
		btn_quitlcmdpanel.setBounds(158, 504, 154, 30);
		Lcmd_panel.add(btn_quitlcmdpanel);
		
		JTextPane list_cmds = new JTextPane();
		list_cmds.setBounds(10, 66, 108, 233);
		Lcmd_panel.add(list_cmds);
		
		JScrollPane scrollBar = new JScrollPane(list_cmds);
		Lcmd_panel.add(scrollBar);
		scrollBar.setBounds(10, 64, 464, 429);
		
		JPanel prd_pc_panel = new JPanel();
		prd_pc_panel.setLayout(null);
		frame.getContentPane().add(prd_pc_panel, "name_857916179753698");
		
	
		btn_quit_prd_pc.setBounds(161, 300, 154, 30);
		prd_pc_panel.add(btn_quit_prd_pc);
		
		JLabel lblsuppritionDunClient_1_1_1 = new JLabel("*****Le produit le plus commercialis\u00E9 ******");
		lblsuppritionDunClient_1_1_1.setHorizontalAlignment(SwingConstants.CENTER);
		lblsuppritionDunClient_1_1_1.setFont(new Font("Cambria", Font.BOLD, 14));
		lblsuppritionDunClient_1_1_1.setBounds(10, 11, 464, 30);
		prd_pc_panel.add(lblsuppritionDunClient_1_1_1);
		
		JTextPane prdpc = new JTextPane();
		prdpc.setFont(new Font("Tahoma", Font.BOLD, 14));
		prdpc.setBounds(124, 85, 243, 134);
		prd_pc_panel.add(prdpc);
		
		JPanel prd_mc_panel = new JPanel();
		prd_mc_panel.setLayout(null);
		frame.getContentPane().add(prd_mc_panel, "name_858508120258695");
		
		btn_quit_prd_mc.setBounds(155, 289, 154, 30);
		prd_mc_panel.add(btn_quit_prd_mc);
		
		JLabel lblsuppritionDunClient_1_1_1_1 = new JLabel("*****Le produit le moins commercialis\u00E9******");
		lblsuppritionDunClient_1_1_1_1.setHorizontalAlignment(SwingConstants.CENTER);
		lblsuppritionDunClient_1_1_1_1.setFont(new Font("Cambria", Font.BOLD, 14));
		lblsuppritionDunClient_1_1_1_1.setBounds(10, 11, 464, 30);
		prd_mc_panel.add(lblsuppritionDunClient_1_1_1_1);
		
		JTextPane prdmc = new JTextPane();
		prdmc.setFont(new Font("Tahoma", Font.BOLD, 14));
		prdmc.setBounds(111, 72, 243, 134);
		prd_mc_panel.add(prdmc);
			
        //Fonctionnalité de chaque button////////////////////////
		//Fonctionnalité de l'interface//////////////////////////
		
		//Button quitter la modification de client
		btn_quitmdfclt_.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				mdfclt_panel.setVisible(false);
				Gclt_panel.setVisible(true);
				
			}
		});
		//Button quitter la gestion de client
		btn_quitclt_.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				ajtclt_panel.setVisible(false);
				Gclt_panel.setVisible(true);
			}
		});
		
		//Button afficher la liste des commandes
		afchLcmd5.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				Gcmd_panel.setVisible(false);
				prd_mc_panel.setVisible(true);
				//Le produit le moins commercialiser
                String a = "Le produit le moins commercialiser: " + Mylistcmd.prd_mc().getNom_produit() +"\n avec un  nombre d'achat:"+Mylistcmd.prd_mc().getAchat();
                //Envoie la chaine "a" au Jtextefield prdmc
				prdmc.setText(a);
				
			}
		});
		//Button quitter le produit le mois commercialiser
		btn_quit_prd_mc.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				Gcmd_panel.setVisible(true);
				prd_mc_panel.setVisible(false);
			}
		});
		
		//Button afficher la liste de commande
		afchLcmd4.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				Gcmd_panel.setVisible(false);
				prd_pc_panel.setVisible(true);
				//Le produit le plus commercialiser
				String a = "Le produit le plus commercialiser: " + Mylistcmd.prd_pc().getNom_produit() +"\n avec un  nombre d'achat:"+Mylistcmd.prd_pc().getAchat();
				//Envoie la chaine "a" au Jtextefield prdpc
				prdpc.setText(a);
				
				
			}
		});
		
		//Button quitter le produit le plus commercialiser
		btn_quit_prd_pc.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				prd_pc_panel.setVisible(false);
				Gcmd_panel.setVisible(true);
				
			}
		});
		
		//Button modification des commandes
		btn_mdf_cmd.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				int a = Integer.parseInt(n_cmd_mdf.getText().trim());
				String b = id_clt_cmd_mdf.getText();
				String c = id_prd_cmd_mdf.getText();
				String d = d_cmd_mdf.getText();
				
				ArrayList<String> idprds = new ArrayList<>(Arrays.asList(c.split(",")));	
				Mylistcmd.Modifier_commande(a,b,idprds,d);
				
				n_cmd_mdf.setText("");
				id_clt_cmd_mdf.setText("");
				id_prd_cmd_mdf.setText("");
				
			}
		});
		
		//Button suppression des commandes
		btn_supp_cmd.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				int n = Integer.parseInt(num_cmd_supp.getText().trim());
				Mylistcmd.Supp_commande(n);
				num_cmd_supp.setText("");
			}
		});
		//Button quitter la liste des commandes
		btn_quitlcmdpanel.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				Lcmd_panel.setVisible(false);
				Gcmd_panel.setVisible(true);
			}
		});
		
		//Button afficher la liste des commandes
		btn_afchLcmd1.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				Lcmd_panel.setVisible(true);
				Gcmd_panel.setVisible(false);
				
				ArrayList<commande> L = new ArrayList<commande>();
			    L = Mylistcmd.Afficher_List_Commande();
			    
			    String s = "";
			    
				for(commande cmd : L) {
					
						s=s+"\n"+(cmd.toString());	
	
				}
				
				list_cmds.setText(s);
				
			}
		});
		
		//Button ajouter une commande
		btn_ajtc_cmd.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
		        
				int a = Integer.parseInt(num_cmd.getText().trim());
				String b = idc_cmd.getText();
				String c = idp_cmd.getText();
				String d = d_cmd.getText();
				if(!Mylistcmd.Existe_cmd(a)) {
					
					errorcmd.setText("");
					ArrayList<String> idprds = new ArrayList<>(Arrays.asList(c.split(",")));	
					Mylistcmd.Ajoute_commande(a,b,idprds,d);
					
				}else {
					//Ajouter un label d'erreur
					errorcmd.setText("Cette commande existe déja !");
				}
				
				
				num_cmd.setText("");
				idc_cmd.setText("");
				idp_cmd.setText("");
				qtep.setText("");
				
			}
		});
		
		//Button quitter l'ajoute de commande
		btn_quitajt_cmd.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				ajtcmd_panel.setVisible(false);
				Gcmd_panel.setVisible(true);
			}
		});
		
		//Button quitter la  modification de commande
		btn_quitmdf_cmd.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				cmd_mdf_panel.setVisible(false);
				Gcmd_panel.setVisible(true);
			}
		});
		//Button quitter la  suppression de commande
		btn_quit_supp_cmd.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				suppcmd_panel.setVisible(false);
				Gcmd_panel.setVisible(true);
			}
		});
		
		//Button de la modification de commande
		btn_mdfcmd.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				Gcmd_panel.setVisible(false);
				cmd_mdf_panel.setVisible(true);
			}
		});
		
		//Button de la suppression de commande
		btn_suppcmd.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				Gcmd_panel.setVisible(false);
				suppcmd_panel.setVisible(true);
			}
		});
		
		//Button de l'ajoute de commande
		btn_ajtcmd.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				Gcmd_panel.setVisible(false);
				ajtcmd_panel.setVisible(true);
				
			}
		});
		//Button afficher la catégories de produit
		btn_valtype.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				ArrayList<produit> L = new ArrayList<produit>();
			    L = Mylistp.Afficher_List_Produit();
			    
			    String s = "";
			    
				for(produit prd : L) {
					if((catv.getText()).equalsIgnoreCase(prd.getCategorie())) {
						s=s+"\n"+(prd.toString());
					}	
					
			
				}
				list_prd_cat.setText(s);
				
				
			}
		});
		//Button de validation
		btnNewButton.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				idpmdf.setEnabled(false);
				npmdf.setEnabled(true);
				catpmdf.setEnabled(true);
				qtemdf.setEnabled(true);
				ppmdf.setEnabled(true);
				pcar_mdf.setEnabled(true);
			}
		});
		
		//Button de modification de produit
		btn_mdf_prd.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				String a = idpmdf.getText();
				String b = npmdf.getText();
				String c = catpmdf.getText();
				int d =Integer.parseInt(qtemdf.getText().trim());
				float f = Float.parseFloat((ppmdf.getText()).trim());
				String g = pcar_mdf.getText();
				
				
				
				
				Mylistp.Modifier_produit(a,b,c,d,f,g);
				
				idpmdf.setText("");
				npmdf.setText("");
				catpmdf.setText("");
				qtemdf.setText("");
				ppmdf.setText("");
				pcar_mdf.setText("");
				
				idpmdf.setEnabled(true);
				npmdf.setEnabled(false);
				catpmdf.setEnabled(false);
				qtemdf.setEnabled(false);
				ppmdf.setEnabled(false);
				pcar_mdf.setEnabled(false);
				
			}
		});
		
		//Button suppression de produit
		btn_supp_prd.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				Mylistp.Supp_produit(Idpsupp.getText());
				Idpsupp.setText("");
			}
		});
		
		//Button Ajoute de produit
		btn_ajt_prd.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				String a = idp.getText();
				String b = np.getText();
				String c =catp.getText();
				int d =Integer.parseInt(qtep.getText().trim());
				float f = Float.parseFloat((pp.getText()).trim());
				String g =pcar.getText();
				if(!Mylistp.Existe_prd(a)) {
					errorprd.setText("");
					produit nvprd = new produit(a,b,c,d,f,g);
					Mylistp.Ajout_produit(nvprd);
					
				}else {
					errorprd.setText("Ce produit existe déja !");
				}
				
				
				idp.setText("");
				np.setText("");
				catp.setText("");
				qtep.setText("");
				pp.setText("");
				pcar.setText("");
			}
		});
		
		//Button ajoute de client
		btn_ajtclt_.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				String a = Id_clt.getText();
				String b = nom_clt.getText();
				String c =adr_clt.getText();
				String d =numtl_clt.getText();
				
				if(!Mylistc.Existe_client(a)) {
					
					errorclt.setText("");
					client nvclt = new client(a,b,c,d,0);
				    Mylistc.Ajout_client(nvclt);
				
				}else {
					errorclt.setText("Ce client existe déja !");
				}
				
				Id_clt.setText("");
				nom_clt.setText("");
				adr_clt.setText("");
				numtl_clt.setText("");
				
				
				
				
				
				
					
			}
		});
		//Button Quitter la catégories de produit
		btn_quitprdtype.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				Gprd_panel.setVisible(true);
				Lprdtype_panel.setVisible(false);
			}
		});
		
		//Button Quitter la liste des produits
		btn_quitlst_prd.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				Gprd_panel.setVisible(true);
				Lprd_panel.setVisible(false);
			}
		});
		
		//Button Quitter la suppression de produit
		btn_quitsupp_prd.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				Gprd_panel.setVisible(true);
				suppprd_panel.setVisible(false);
			}
		});
		
		//Button Quitter l'ajoute de produit
		btn_quit_ajtprd.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				Gprd_panel.setVisible(true);
				ajtprd_panel.setVisible(false);
			}
		});
		
		//Button Quitter la modification de produit
		btn_quitmdf_prd.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				Gprd_panel.setVisible(true);
				mdfprd_panel.setVisible(false);
			}
		});
		
		//Button afficher les produit par catégories 
		btn_catLprd_1.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				Gprd_panel.setVisible(false);
				Lprdtype_panel.setVisible(true);
				
				ArrayList<produit> L = new ArrayList<produit>();
			    L = Mylistp.Afficher_List_Produit();
			    String s = "";
			    
				for(produit prd : L) {
						
					s=s+"\n"+(prd.toString());
			
				}
				list_prd.setText(s);
				
				
			}
		});
		
		//Button afficher la liste des produits
		btn_afchLprd.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				Gprd_panel.setVisible(false);
				Lprd_panel.setVisible(true);
				
				
				
			    ArrayList<produit> L = new ArrayList<produit>();
			    L = Mylistp.Afficher_List_Produit();
			    String s = "";
			    
				for(produit prd : L) {
						
					s=s+"\n"+(prd.toString());
			
				}
				list_prd.setText(s);
			}
		});
		
		//Button modifier le produit 
		btn_mdfprd.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				Gprd_panel.setVisible(false);
				mdfprd_panel.setVisible(true);
			}
		});
		
		//Button suppression de produit
		btn_suppprd.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				Gprd_panel.setVisible(false);
				suppprd_panel.setVisible(true);
			}
		});
		
		//Button ajoute de produit 
		btn_ajtprd.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				Gprd_panel.setVisible(false);
				ajtprd_panel.setVisible(true);
			}
		});
		
		//Button Quitter l'etat de fedelisation de client 
		btn_quitettclt1.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {	
				etatclt_panel.setVisible(false);
				Gclt_panel.setVisible(true);
			}
		});
		
		//Button Afficher l'etat de fedelisation de client 
		btn_etatclt_1.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				String idclt =idetatclt.getText();
				
				etatclt.setText(Mylistc.Etat_client(idclt));
				if(Mylistc.Etat_client(idclt).equalsIgnoreCase("Ce Client est fidele")) {
					cartefdlt.setEnabled(true);
					cartefdlt.setText("Carte de fidélité:\n"+Mylistc.cartefdlt(idclt));
				}else {
					cartefdlt.setText("");
					cartefdlt.setEnabled(false);
				}
				
			}
		});
		
		//Button Afficher l'etat de fedelisation de client 
		btn_etatclt.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				Gclt_panel.setVisible(false);
				etatclt_panel.setVisible(true);
				
			}
		});
		
		//Button suppression de client 
		btn_suppclt.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				suppclt_panel.setVisible(true);
				Gclt_panel.setVisible(false);
			}
		});
		
		//Button quitter la suppression de client 
		btn_quitsuppclt_.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				suppclt_panel.setVisible(false);
				Gclt_panel.setVisible(true);
				
			}
		});
		
		//Button suppression de client 
		btn_supp_clt.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				Mylistc.Supp_client(suppidclt.getText());
				suppidclt.setText("");
			}
		});
		//Button lodification de client 
		btn_mdf_clt.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				String a = mdfidclt.getText();
				String b = mdfnclt.getText();
				String c = mdfadrclt.getText();
				String d = numtl_clt.getText();
				int f = Integer.parseInt((mdfnbach.getText()).trim());
				
				
				
				Mylistc.Modifier_client(a,b,c,d,f);
				
				mdfidclt.setText("");
				mdfnclt.setText("");
				mdfadrclt.setText("");
				numtl_clt.setText("");
				mdfnbach.setText("");
					
				mdfidclt.setEnabled(true);
				mdfnclt.setEnabled(false);
				mdfadrclt.setEnabled(false);
				mdfntl.setEnabled(false);
				mdfnbach.setEnabled(false);
				
				
				
			}
		});
		
		//Button Ajoute de client 
		btn_ajtclt_1_1_3.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				mdfidclt.setEnabled(false);
				mdfnclt.setEnabled(true);
				mdfadrclt.setEnabled(true);
				mdfntl.setEnabled(true);
				mdfnbach.setEnabled(true);

			}
		});
		
		//Button modification de client 
		btn_mdfclt.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				Gclt_panel.setVisible(false);
				mdfclt_panel.setVisible(true);
			}
		});
		//Button quitter la liste des clients
		btn_quitLclt_.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				Lclt_panel.setVisible(false);
				Gclt_panel.setVisible(true);
			}
		});
		
		//Button afficher la liste des clients
		btn_afchLclt.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				
				Lclt_panel.setVisible(true);
				Gclt_panel.setVisible(false);
				
			    ArrayList<client> L = new ArrayList<client>();
			    L = Mylistc.Afficher_List_client();
			    String s = "";
			    
				for(client clt : L) {
						
					s=s+"\n"+(clt.toString());
			
				}
				list_clt.setText(s);
			}
		});
		
		//Button ajouter un client
		btn_ajtclt.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				ajtclt_panel.setVisible(true);
				Gclt_panel.setVisible(false);
			}
		});
		//Button gestion de produits
		Button_Gprd.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				menu.setVisible(false);
				Gprd_panel.setVisible(true);
			}
		});
		
		//Button quitter le client
		btn_quitclt_1.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				menu.setVisible(true);
				Gprd_panel.setVisible(false);
			}
		});
		
		//Button quitter commande
		btn_quitcmd_1.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				Gcmd_panel.setVisible(false);
				menu.setVisible(true);
			}
		});
		
		//Button gestion de clients
		Button_Gclt.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				Gclt_panel.setVisible(true);
				menu.setVisible(false);
			}
		});
		
		//Button quitter le programme
		Button_quitter.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {

				//Serialisation avant des trois list Globale(Listc,Listp,Listcmd) dans un fichier MyData.ser
				try{
				    
				    ObjectOutputStream out = new ObjectOutputStream(new FileOutputStream("MyData.ser"));
				    out.writeObject(clt_prd_cmd.Listc);
				    out.writeObject(clt_prd_cmd.Listp);
				    out.writeObject(clt_prd_cmd.Listcmd);
				    out.close();
				    
				} catch (IOException e1) {
					
				}
		        
				System.exit(0);
				
			}
		});
		
		//Button quitter le client
		btn_quitclt.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				Gclt_panel.setVisible(false);
				menu.setVisible(true);
			}
		});
		
		//Button gestion de commande
		Button_Gcmd.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				Gcmd_panel.setVisible(true);
				menu.setVisible(false);
			}
		});
	}
}
