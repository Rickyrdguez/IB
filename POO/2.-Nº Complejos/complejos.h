#ifndef COMPLEJOS_H_
#define COMPLEJOS_H_

class Complejo {
 public:
  // Constructor
  Complejo(double parte_real, double parte_imaginaria)
      : parte_real_{parte_real}, parte_imaginaria_{parte_imaginaria} {}

  // Getters
  double GetParteReal() const {return parte_real_; }
  double GetParteImaginaria() const {return parte_imaginaria_;}

  // Métodos
  Complejo Suma(const Complejo&) const;
  Complejo Resta(const Complejo&) const;
  Complejo Multiplicacion(const Complejo&) const;
  Complejo Division(const Complejo&) const;
  void MostrarPorPantalla() const;

 private:
  double parte_real_;
  double parte_imaginaria_;
};

#endif  // COMPLEJOS_H_