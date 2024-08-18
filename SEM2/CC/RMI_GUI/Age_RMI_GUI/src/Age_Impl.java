import java.rmi.server.*;
import java.time.LocalDate;
import java.time.Period;

public class Age_Impl extends UnicastRemoteObject implements Age_Interface {
    public Age_Impl() throws java.rmi.RemoteException { }
 
    public String calculateAge(int year, int month, int day) throws java.rmi.RemoteException {
        LocalDate currentDate=LocalDate.now();
        LocalDate birthDate =LocalDate.of(year, month, day);
        Period age =Period.between(birthDate, currentDate);

        String result =age.getYears() + " Years, "+age.getMonths() +" Months, "+ age.getDays() +" Days";
        return result;
    }
}