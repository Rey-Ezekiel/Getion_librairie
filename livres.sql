CREATE OR REPLACE DATABASE gestionLivres;
use gestionLivres;
-- Création de la table livre;
create table livre(
    id_livre int primary key auto_increment,
    titre varchar(50),
    auteur varchar(50),
    prix decimal(10,2),   --Decimal permet de stocker des nbres à virgules
    -- Maximum 10 chiffres au total; et 2 chiffres après la virgule;
    quantite int
);
--Table livre d'une appliction de gestion