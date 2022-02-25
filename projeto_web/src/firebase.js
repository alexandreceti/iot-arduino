import Firebase from 'firebase';

const app = Firebase.initializeApp({
  apiKey: 'tokentokentokentokentoken',
  authDomain: 'xxxxxxxxxx.firebaseapp.com',
  databaseURL: 'https://xxxxxxxxx.firebaseio.com',
  projectId: 'xxxxxxxxxx',
  storageBucket: 'xxxxxxxxxxxx.appspot.com',
  messagingSenderId: 'xxxxxxxxxxxx',
  appId: 'xxxxxxxxxxxxxxxxxxxxxxxx'
})

export const db = app.database()

//export const db2 = app.firestore()
// db.settings(settings);

export const volCollection = db.ref('vol')

// db.ref('vol').on('value', snapshot => {
//   const vol = snapshot.val()
//   // do something with documents
// })

// export { db, volCollection }
